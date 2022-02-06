#include <stdio.h>
#include "typedef.h"
void outputArr()
{
    for(int i = 0; i < how_n; ++i)
    {
        for(int j = 0; j < how_n ; ++j)
            {
            printf("%d\t",arr[i][j]);
            }
        printf("\n");
    }
    printf("\n");
}

