#include "gtest/gtest.h"
#include "../CountDigits.h"

TEST(TestForMyWork, CountDigints1)
{
    int result = CountDigits(536);
    EXPECT_EQ(3, result);
}

TEST(TestForMyWork, CountDigints2)
{
    int result = CountDigits(7);
    EXPECT_EQ(1, result);
}

TEST(TestForMyWork, CountDigints3)
{
    int result = CountDigits(489237);
    EXPECT_EQ(6, result);
}
