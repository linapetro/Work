#include "../Logic.h"
#include "gtest/gtest.h"

TEST(TestForMyWork, TestMaxIndex1)
{
    int array[] = {1, -2, 3};
    int result = MaxIndex(array, 3);
    EXPECT_EQ(2, result);
}

TEST(TestForMyWork, TestMaxIndex2)
{
    int array[] = {-2, 3, 1};
    int result = MaxIndex(array, 3);
    EXPECT_EQ(1, result);
}

TEST(TestForMyWork, TestLastNegativeIndex1)
{
    int array[] = {-2, 3, 1};
    int result = LastNegativeIndex(array, 3);
    EXPECT_EQ(0, result);
}
