#include<stdlib.h>
#include"typedef.h"



void make_arr()
{
    arr = (int**)malloc(how_n * sizeof(int*));
    for(int i = 0; i < how_n; ++i)
    {
        *(arr+i) = (int*)malloc(how_n * sizeof(int));
    }
}

void del_arr()
{
    for(int i = 0;i < how_n; ++i)
    {
        free(arr[i]);
    }
    free(arr);
}
