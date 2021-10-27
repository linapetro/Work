#include "Array.h"
#include "DetermineTheLocation.h"
#include <stdio.h>

void DetermineTheLocation(int *array1, int *array2, int size1, int size2)
{
    printf("Result:    ");
    for(int i = 0; i < size1; ++i)
    {
        bool found = false;
        for(int j = 0; j < size2; ++j)
        {
            if(array1[i] == array2[j])
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
    printf("\n");
}
