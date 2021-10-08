//Перевод числа из десятичной системы счисления в двоичную.
#include <iostream>

int main()
{
    unsigned int N;
    printf("Please enter a number: ");
    scanf("%d", &N);
    unsigned int binary_number = 0;
    do {
    binary_number = (N % 2);
    N = N / 2;
    printf("%d", binary_number);
    } while (N > 0);
    return 0;
}




