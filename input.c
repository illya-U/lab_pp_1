#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "typedef.h"

void inputRand()
{
    srand(time(0));
 for(int i = 0; i < how_n; ++i)
    {
        for(int j = 0; j < how_n; ++j)
       {
            arr[i][j]=-40 + rand() % 100;
       }
    }
}

void inputSorted() 
{
    int b = 0;
    for(int i = 0; i < how_n ; ++i) 
        {
        for(int j = 0; j < how_n; ++j) 
        {
            arr[i][j] = b;
            ++b;
        }
    }
}

void inputKeyboard()
{
  for(int i = 0; i < how_n; ++i)
    {
        for(int j = 0; j < how_n; ++j)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

