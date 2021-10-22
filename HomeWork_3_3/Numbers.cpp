#include <math.h>
#include <iostream>

unsigned int CountNumber(unsigned int number)
{
    unsigned int count = 0;
    while (number > 0) {
        number = number / 10;
        count = count + 1;
    }
    return count;
}

unsigned int SwapNumber(unsigned int number)
{
    unsigned int count = CountNumber(number);
    unsigned int first_digit = number / pow(10, count - 1);
    unsigned int last_digit = number % 10;
    unsigned int new_number = 0;
    new_number = number - last_digit;
    new_number = new_number - first_digit * pow(10, count - 1);
    new_number = new_number + first_digit;
    new_number = new_number + last_digit * pow(10, count - 1);
    return new_number;
}
