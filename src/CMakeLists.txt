set(exec_name ${CMAKE_PROJECT_NAME})

set(src_list
    main.c
    example.c
)

add_executable(${exec_name} ${src_list})

add_library(${exec_name}_lib STATIC ${src_list})

target_link_libraries(${exec_name} common_lib)
