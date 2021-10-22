#include <iostream>
#include "Array.h"

int MaxIndex(int *array, int size)
{
    int index_max = 0;
    for(int i = 1; i < size; ++i)
    {
        if(array[i] > array[index_max])
        {
            index_max = i;
        }
    }
    return index_max;
}

int LastNegativeIndex(int *array, int size)
{
    int index_last_negative = 0;
    for(int i = size - 1; i >= 0; --i)
    {
        if(array[i] < 0)
        {
            index_last_negative = i;
            break;
        }
    }
    return index_last_negative;
}

