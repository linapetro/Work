#include "gtest/gtest.h"
#include "../Numbers.h"


TEST(TestForMyWork, MinNumber1)
{
    unsigned int result = MinNumber(2, 4, 6);
    EXPECT_EQ(2, result);
}

TEST(TestForMyWork, MinNumber2)
{
    unsigned int result = MinNumber(225, 100, 505);
    EXPECT_EQ(100, result);
}

TEST(TestForMyWork, MinDivisor1)
{
    unsigned int result = MinDivisor(225, 100, 505);
    EXPECT_EQ(5, result);
}
