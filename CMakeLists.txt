cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)

cmake_policy(SET CMP0091 NEW)
project(hdr-switch)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_subdirectory(src/core)
add_subdirectory(src/service)
add_subdirectory(src/tray)