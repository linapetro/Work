// Определить местоположение элементов массива А (30), не встречающихся в массиве В (15).
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int mass1 = 30;
    int A[mass1] = {};
    constexpr int mass2 = 15;
    int B[mass2] = {};

    srand(time(nullptr));

    printf("Massive A: ");

    for(int i = 0; i < mass1; ++i)
    {
       A[i] = rand() % 10;
       printf("%d ", A[i]);
    }
    printf("\n");

    printf("Massive B: ");

    for(int i = 0; i < mass2; ++i)
    {
       B[i] = rand() % 10;
       printf("%d ", B[i]);
    }
    printf("\n");

    printf("Result:   ");
    for(int i = 0; i < mass1; ++i)
    {
        bool found = false;
        for(int j = 0; j < mass2; ++j)
        {
            if(A[i] == B[j])
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
