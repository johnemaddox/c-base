cmake_minimum_required(VERSION 3.10.0)

project(base_project VERSION 0.1.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

include_directories(inc)
add_subdirectory(src)

#if(${CMAKE_BUILD_TYPE} STREQUAL "Debug")
#    add_subdirectory(test)
#endif()
