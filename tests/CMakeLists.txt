find_package(GTest REQUIRED)

add_executable(tests
    example-test.cpp
)

target_link_libraries(tests PRIVATE
    ${PROJECT_NAME}_lib
    GTest::Main
)
