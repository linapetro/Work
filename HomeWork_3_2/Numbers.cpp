#include <iostream>

unsigned int EnterNumber(int x)
{
    unsigned int number;
    printf("Please enter number%d: ", x);
    scanf("%d", &number);
    return number;
}

unsigned int MinNumber(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int min = a > b ? b : a;
    min = min > c ? c : min;
    return min;
}

unsigned int MinDivisor(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int result = 1;
    unsigned int min = MinNumber(a, b, c);
    for (unsigned int i = 2; i <= min; ++i) {
        if ((a%i == 0) && (b%i == 0) && (c%i == 0)) {
            result = i;
            break;
        }
    }
    return result;
}
