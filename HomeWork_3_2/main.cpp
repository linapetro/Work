//Программа для нахождения наименьшего общего делителя трех натуральных чисел.
#include <iostream>
#include "Numbers.h"

int main()
{

    unsigned int number1 = EnterNumber(1);
    unsigned int number2 = EnterNumber(2);
    unsigned int number3 = EnterNumber(3);

    unsigned int result = MinDivisor(number1, number2, number3);

    printf("%d\n", result);
    return 0;
}
