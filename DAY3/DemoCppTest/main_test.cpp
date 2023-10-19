#include "gtest/gtest.h"
int add(int a, int b)
{
    return a+b;
}

TEST(addTest,BasicTest)
{
    EXPECT_EQ(add(2,4),6);
}