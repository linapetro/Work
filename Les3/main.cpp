// с клавиатуры вводится последовательность чисел
//признак окончания ввода ввод 0
//найти максимальное из них

#include <stdio.h>

int main()
{
    printf("Please enter numbers:");
    int max=0;
    int n;
    do {
        scanf("%d", &n);
        if(n>max)
        {
            max=n;
        }

    }
    while(n!=0);
    printf("Max is: %d", max);
    return 0;
}
