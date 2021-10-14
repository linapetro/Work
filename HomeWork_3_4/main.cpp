//Перевод числа из десятичной системы счисления в двоичную.
#include <iostream>
#include <limits.h>

int main()
{
    unsigned int N;
    printf("Please enter a number: ");
    scanf("%d", &N);
    for(int i = sizeof(N) * CHAR_BIT; i >= 0; --i)
    {
        if(N & (1 << i))
        {
            printf("1");
        }
        else
            printf("0");
    }
    printf("\n");
    return 0;
}




