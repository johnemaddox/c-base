cmake_minimum_required(VERSION 3.10.0)

project(base_project VERSION 0.1.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

# -Werror to treat compiler warnings as errors
# -Wno-psabi suppress ABI warning for changes affecting 32-bit ARM (RasPi)
add_compile_options(-Werror -Wno-psabi)

include_directories(src)
add_subdirectory(src)

if(${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    add_subdirectory(test)
    add_subdirectory(lib/googletest)
endif()
