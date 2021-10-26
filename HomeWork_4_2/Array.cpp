#include "Array.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

void PrintArray(int *array1, int *array2, int size1, int size2)
{
    printf("Massive A: ");
    for(int i = 0; i < size1; ++i)
    {
       printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Massive B: ");
    for(int i = 0; i < size2; ++i)
    {
       printf("%d ", array2[i]);
    }
    printf("\n");
}

void DetermineTheLocation(int *array1, int *array2, int size1, int size2)
{
    printf("Result:    ");
    for(int i = 0; i < size1; ++i)
    {
        bool found = false;
        for(int j = 0; j < size2; ++j)
        {
            if(array1[i] == array2[j])
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
