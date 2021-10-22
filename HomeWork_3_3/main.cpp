//Поменять местами цифры старшего и младшего разрядов данного натурального числа.

#include "Numbers.h"
#include <stdio.h>


int main()
{
    unsigned int N;

    printf("Please enter a number: ");
    scanf("%d", &N);

    unsigned int new_number = SwapNumber(N);

    printf("New number: %d\n", new_number);

    return 0;
}
