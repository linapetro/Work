//Необходимо определить количество цифр в введенном натуральном числе.
#include <iostream>

int main()
{
    unsigned int N;
    unsigned int count = 0;
    printf("Please enter a number: ");
    scanf("%d", &N);
    while(N > 0) {
        N = N / 10;
        count = count + 1;
    }
    printf("%d\n", count);
    return 0;
}
