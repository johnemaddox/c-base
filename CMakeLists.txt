cmake_minimum_required(VERSION 3.16.3)

message(STATUS "MY_PROJECT=${MY_PROJECT}")

project(${MY_PROJECT} LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_compile_options(-Wall -Werror -Wextra)

add_subdirectory(src)

if("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
    message(STATUS "Building tests")
    add_subdirectory(tests)
endif()
