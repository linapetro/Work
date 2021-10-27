// Определить местоположение элементов массива А (30), не встречающихся в массиве В (15).
#include <stdio.h>
#include "Array.h"
#include "DetermineTheLocation.h"

int main()
{
    constexpr int size1 = 30;

    constexpr int size2 = 15;

    int *A = CreateArray(size1);

    int *B = CreateArray(size2);

    Init();

    FillArray(A, B, size1, size2);

    PrintArray(A, B, size1, size2);

    DetermineTheLocation(A, B, size1, size2);

    FreeArray(A);

    FreeArray(B);

    return 0;
}
