//   Дана матрица размером 7х7. Поменять местами k-й столбец с k-ой строкой.
#include <iostream>
#include <time.h>
#include <stdlib.h>

int main()
{
    constexpr int rows = 7;
    constexpr int cols = 7;
    int arr[rows][cols] = {};
    srand(time(nullptr));

    printf("Matrix 7x7:\n");

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
            arr[i][j] = rand() % 10;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    unsigned k = 0;
    printf("Please enter k: ");
    scanf("%d", &k);

    int new_arr[rows][cols];

    printf("New matrix 7x7:\n");


    for(int i = 0; i < rows; ++i)
    {
        new_arr[i][k] = arr[i][k];
        arr[i][k] = arr[k][i];
        arr[k][i] = new_arr[i][k];
    }

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
