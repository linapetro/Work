#include "gtest/gtest.h"
#include "../DetermineTheLocation.h"

TEST(HomeWork_4_2, DetermineTheLocation)
{
    int size1 = 5;
    int size2 = 4;
    int array1[] = {0, 1, 2, 3, 4};
    int array2[] = {0, 1, 2, 3};
    int array3[size1];
    int count = DetermineTheLocation(array1, array2, size1, size2, array3);

    EXPECT_EQ(1, count);
    EXPECT_EQ(4, array3[0]);
}
