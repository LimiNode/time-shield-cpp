vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO LimiNode/time-shield-cpp
    REF 231bb8f484774015dbd1219785ac85806e3b1d8a
    SHA512 4c2f0aac6bd695cf6f648fc20a2e921705427260ac64562e075dd277c01df8f820f3c01505c1c054aec096133dbf85a7eddf4e49e4ca8c5fa5999ce2606c0a45
    HEAD_REF main
)

vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}"
    OPTIONS
        -DTIME_SHIELD_CPP_BUILD_EXAMPLES=OFF
        -DTIME_SHIELD_CPP_BUILD_TESTS=OFF
)

vcpkg_cmake_install()

file(REMOVE_RECURSE
    "${CURRENT_PACKAGES_DIR}/debug/include"
    "${CURRENT_PACKAGES_DIR}/debug/lib/pkgconfig"
)

vcpkg_cmake_config_fixup(
    PACKAGE_NAME TimeShield
    CONFIG_PATH lib/cmake/TimeShield
)

vcpkg_install_copyright(FILE_LIST "${SOURCE_PATH}/LICENSE")

file(REMOVE_RECURSE
    "${CURRENT_PACKAGES_DIR}/debug/include"
    "${CURRENT_PACKAGES_DIR}/debug/lib"
    "${CURRENT_PACKAGES_DIR}/debug/share/${PORT}"
)
