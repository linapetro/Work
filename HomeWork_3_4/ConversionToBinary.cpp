#include "ConversionToBinary.h"
#include <stdio.h>
#include <limits.h>

int ConversionToBinary(int number)
{
    for(int i = sizeof(number) * CHAR_BIT; i >= 0; --i)
    {
        if(number & (1 << i))
        {
            printf("1");
        }
        else
            printf("0");
    }
    printf("\n");
}
