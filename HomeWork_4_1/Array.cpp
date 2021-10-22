#include <iostream>
#include <time.h>


int *CreateMass(int mass)
{
    return (int*)malloc(mass * sizeof(int));
}

void FreeMass(int *ptr)
{
    if(ptr == nullptr)
        return;

    free(ptr);
}

void Init()
{
    srand(time(nullptr));
}

void FillArray(int *array, int size)
{
    for(int i = 0; i < size; ++i)
    {
        int value = (rand() % 10) - 5;
        array[i] = value;
    }
}

void SwapElements(int *array, int index1, int index2)
{
    int c = array[index1];
    array[index1] = array[index2];
    array[index2] = c;
}


void PrintArray(int *array, int size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


