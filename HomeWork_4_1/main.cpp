// Поменять местами максимальный и последний отрицательный элементы массива M(40).
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int mass = 40;
    int M[mass] = {};

    srand(time(nullptr));

    printf("Start: ");
    for(int i = 0; i < mass; ++i)
    {
        int value = rand() % 10;
        if (i % 2 == 0)
        {
            value = -value;
        }
        M[i] = value;

        printf("%d ", M[i]);

    }
    printf("\n");

    int index_max = 0;
    for(int i = 1; i < mass; ++i)
    {
        if(M[i] > M[index_max])
        {
            index_max = i;
        }
    }

    int index_last_negative = 0;
    for(int i = mass - 1; i >= 0; --i)
    {
        if(M[i] < 0)
        {
            index_last_negative = i;
            break;
        }
    }

    int c = M[index_max];
    M[index_max] = M[index_last_negative];
    M[index_last_negative] = c;

    printf("Result: ");
    for(int i = 0; i < mass; ++i)
    {
        printf("%d ", M[i]);
    }
    printf("\n");

    return 0;
}
