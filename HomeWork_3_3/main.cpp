//Поменять местами цифры старшего и младшего разрядов данного натурального числа.
#include <math.h>
#include <iostream>

int main()
{
    unsigned int N;
    printf("Please enter a number: ");
    scanf("%d", &N);
    unsigned int count = 0;
    unsigned int n = N;
    while (N > 0) {
        N = N / 10;
        count = count + 1;
    }
    unsigned int first_digit = n / pow(10, count - 1);
    unsigned int last_digit = n % 10;
    unsigned new_number = 0;
    new_number = n - last_digit;
    new_number = new_number - first_digit * pow(10, count - 1);
    new_number = new_number + first_digit;
    new_number = new_number + last_digit * pow(10, count - 1);
    printf("New number: %d\n", new_number);
    return 0;
}
