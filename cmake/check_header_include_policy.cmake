if(NOT DEFINED TIME_SHIELD_SOURCE_DIR)
    message(FATAL_ERROR "TIME_SHIELD_SOURCE_DIR is required")
endif()

file(GLOB_RECURSE TIME_SHIELD_DOMAIN_HEADERS
    "${TIME_SHIELD_SOURCE_DIR}/include/time_shield/*/*.hpp"
)

foreach(header IN LISTS TIME_SHIELD_DOMAIN_HEADERS)
    file(RELATIVE_PATH relative_header
        "${TIME_SHIELD_SOURCE_DIR}/include/time_shield"
        "${header}"
    )
    string(REGEX MATCH "^([^/]+)/" domain_match "${relative_header}")
    set(domain "${CMAKE_MATCH_1}")
    if(relative_header MATCHES "^(detail|ntp_client)/")
        continue()
    endif()
    file(STRINGS "${header}" header_lines)

    foreach(line IN LISTS header_lines)
        if(line MATCHES "#include[ \t]+[\"<][^\">]*\\.\\./")
            message(FATAL_ERROR "Parent include is forbidden: ${relative_header}: ${line}")
        endif()

        if(line MATCHES "#include[ \t]+<time_shield/([^>]+)>")
            set(target "${CMAKE_MATCH_1}")
            string(REGEX MATCH "^([^/]+)/" target_domain_match "${target}")
            set(target_domain "${CMAKE_MATCH_1}")
            if(target MATCHES "^[^/]+\\.hpp$")
                set(target_domain "${target}")
            endif()
            set(known_umbrella FALSE)
            foreach(umbrella IN ITEMS core conversions text datetime timezone astronomy timers ntp)
                if(target STREQUAL "${umbrella}.hpp")
                    set(known_umbrella TRUE)
                endif()
            endforeach()
            if(target_domain STREQUAL "${domain}.hpp" AND NOT relative_header MATCHES "(^|/)legacy_aliases\\.hpp$")
                message(FATAL_ERROR
                    "Domain leaf must not include its own umbrella: ${relative_header}: ${line}")
            elseif(target MATCHES "^[^/]+/" AND NOT target_domain STREQUAL "${domain}")
                message(FATAL_ERROR
                    "Cross-domain leaf include is forbidden: ${relative_header}: ${line}")
            elseif(NOT known_umbrella AND NOT target_domain STREQUAL "${domain}")
                message(FATAL_ERROR
                    "Cross-domain include must use an umbrella: ${relative_header}: ${line}")
            endif()
            if(NOT known_umbrella AND NOT target MATCHES "^[a-z_]+/")
                message(FATAL_ERROR "Invalid Time Shield include: ${relative_header}: ${line}")
            endif()
        elseif(line MATCHES "#include[ \t]+\"([^\"]+)\"")
            set(local_target "${CMAKE_MATCH_1}")
            if(local_target MATCHES "^\.\./")
                message(FATAL_ERROR "Parent include is forbidden: ${relative_header}: ${line}")
            endif()
            if(local_target MATCHES "/" AND NOT local_target MATCHES "^detail/")
                message(FATAL_ERROR "Nested cross-domain local include: ${relative_header}: ${line}")
            endif()
        endif()
    endforeach()
endforeach()

message(STATUS "Header include policy passed")
