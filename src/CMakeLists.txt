set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.c *.hpp *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY} ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})

find_library(shared_lib NAMES libshared_lib.a)
message(STATUS ${shared_lib})

add_library(shared_library STATIC IMPORTED)
set_target_properties(shared_library PROPERTIES IMPORTED_LOCATION ${shared_lib})

target_link_libraries( base_project shared_library )