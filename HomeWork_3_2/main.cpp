//Программа для нахождения наименьшего общего делителя трех натуральных чисел.
#include <iostream>

int main()
{
    unsigned int number1;
    unsigned int number2;
    unsigned int number3;
    printf("Please enter the first number: ");
    scanf("%d", &number1);
    printf("Please enter the second number: ");
    scanf("%d", &number2);
    printf("Please enter the third number: ");
    scanf("%d", &number3);
    unsigned int min = number1 > number2 ? number2 : number1;
    min = min > number3 ? number3 : min;
    unsigned int result = 1;
    for (unsigned int i = 2; i <= min; ++i) {
        if ((number1%i == 0) && (number2%i == 0) && (number3%i == 0)) {
            result = i;
            break;
        }
    }
    printf("%d\n", result);
    return 0;
}
