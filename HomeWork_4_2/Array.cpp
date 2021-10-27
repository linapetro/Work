#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Array.h"

int *CreateArray(int size)
{
    return new int[size];
}

void FreeArray(int *ptr)
{
    if(ptr == nullptr)
        return;
    delete[] ptr;
}

void Init()
{
    srand(time(nullptr));
}

// Before calling FillArray you must call Init at least once
void FillArray(int *array1, int *array2, int size1, int size2)
{
    for(int i = 0; i < size1; ++i)
    {
        array1[i] = rand() % 10;
    }
    for(int i = 0; i < size2; ++i)
    {
        array2[i] = rand() % 10;
    }
}

void PrintArray(int *array1, int size1)
{
    for(int i = 0; i < size1; ++i)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");
}
