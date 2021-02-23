#include "gtest/gtest.h"
#include "example.h"

TEST(ExampleTest, hello) {
    EXPECT_STRCASEEQ (hello(), "Hello");
}

TEST(ExampleTest, double_val) {
    EXPECT_EQ (double_val(2), 4);
    EXPECT_EQ (double_val(4), 8);
    EXPECT_EQ (double_val(5), 10);
}
