#include <gtest/gtest.h>

#include "sum.hpp"


TEST(SumTest, SumTest) {
    int a = 1;
    int b = 2;
    int expected = 3;
    EXPECT_EQ(sum(a, b), expected);
}