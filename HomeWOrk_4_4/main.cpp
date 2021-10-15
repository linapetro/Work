//  Вычислить сумму элементов матрицы, лежащих слева от побочной диагонали.

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int rows = 3;
    constexpr int cols = 3;
    int arr[rows][cols];

    srand(time(nullptr));

    printf("Matrix 4x4: \n");

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
            arr[i][j] = rand() % 10;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int result = 0;

    printf("Result:\n");

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
           if(i == (rows - 1) - j)
           {
               break;
           }
           else
               result = result + arr[i][j];
        }
    }
    printf("%d\n", result);

    return 0;

}
