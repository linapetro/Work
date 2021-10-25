//Перевод числа из десятичной системы счисления в двоичную.
#include <iostream>
#include "ConversionToBinary.h"

int main()
{
    int N;
    printf("Please enter a number: ");
    scanf("%d", &N);
    ConversionToBinary(N);
    return 0;
}




