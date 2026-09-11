cmake_minimum_required(VERSION 3.15)
project(PkgConfigConsumer LANGUAGES CXX)

find_package(PkgConfig REQUIRED)
pkg_check_modules(TIME_SHIELD REQUIRED IMPORTED_TARGET time-shield)

add_executable(pkg_config_consumer consumer.cpp)
target_link_libraries(pkg_config_consumer PRIVATE PkgConfig::TIME_SHIELD)

if(MSVC)
    target_compile_options(pkg_config_consumer PRIVATE /W4)
else()
    target_compile_options(pkg_config_consumer PRIVATE -Wall -Wextra -Wpedantic)
endif()
