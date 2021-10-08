//Перевод числа из десятичной системы счисления в двоичную.
#include <iostream>

int main()
{
    unsigned int N;
    printf("Please enter a number: ");
    scanf("%d", &N);
    do {
    printf("%d", N % 2);
    N = N / 2;
    } while (N > 0);
    printf("\n");
    return 0;
}




