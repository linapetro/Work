//Необходимо определить количество цифр в введенном натуральном числе.
#include <iostream>
#include "CountDigits.h"

int main()
{
    unsigned int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    printf("%d\n", CountDigits(number));
    return 0;
}
