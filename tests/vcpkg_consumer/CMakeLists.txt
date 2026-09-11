cmake_minimum_required(VERSION 3.15)
project(VcpkgConsumer LANGUAGES CXX)

find_package(TimeShield CONFIG REQUIRED)

add_executable(vcpkg_consumer consumer.cpp)
target_link_libraries(vcpkg_consumer PRIVATE time_shield::time_shield)
