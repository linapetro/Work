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

    int *C = CreateArray(size1);

    Init();

    FillArray(A, B, size1, size2);

    printf("Array A: ");
    PrintArray(A, size1);
    printf("Array B: ");
    PrintArray(B, size2);

    int count = DetermineTheLocation(A, B, size1, size2, C);

    printf("Result:  ");
    PrintArray(C, count);

    FreeArray(A);

    FreeArray(B);

    FreeArray(C);

    return 0;
}
