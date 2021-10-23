// Поменять местами максимальный и последний отрицательный элементы массива M(40).

#include <iostream>
#include "Array.h"
#include "Logic.h"



int main()
{
    int size;
    printf("Please enter array size: ");
    scanf("%d", &size);
    int *M = CreateMass(size);

    Init();

    printf("Start: ");
    FillArray(M, size);
    PrintArray(M, size);

    int index_max = MaxIndex(M, size);

    int index_last_negative = LastNegativeIndex(M, size);

    SwapElements(M, index_max, index_last_negative);

    printf("Result: ");
    PrintArray(M, size);

    FreeMass(M);

    return 0;
}
