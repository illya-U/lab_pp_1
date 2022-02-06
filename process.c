#include <stdlib.h>
#include "typedef.h"
#include <getopt.h>
#include <stdio.h>

char work_with_arg(int argc,char*argv[]){
   char deb_or_rea='r'; 
   char take_char;
    while((take_char = getopt(argc,argv,"drn:"))!=-1)
    {
        switch(take_char)
        {   
           case'r':
           deb_or_rea = 'r';
           break;
    
           case'd':
           deb_or_rea = 'd';
           break;
    
           case'n':
           how_n = atoi(optarg);
           break; 
       }
    } 
    return deb_or_rea; 
}

void findAndSwapRelease(){
    int tmp,firstPositive,ifpos = -1,lastNegative,ilneg = -1;
    for(int i = 0; i < how_n ; ++i)
    {
        if(arr[how_n-1-i][i] >= 0)
        {
            firstPositive = arr[how_n-1-i][i];
            ifpos = i;
           // printf("firstPositive = %d\n",firstPositive);
            break;
        }
    }
    for(int i = 0; i < how_n; ++i) {
        if(arr[i][how_n-1-i] < 0)
        {
            lastNegative = arr[i][how_n-1-i];
            ilneg = i;
          //  printf("lastNegative = %d\n",lastNegative);
            break;
        }
    }
    if((ifpos != -1)&&(ilneg != -1)){
        tmp = arr[how_n-1-ifpos][ifpos];
        arr[how_n-1-ifpos][ifpos] = arr[ilneg][how_n-1-ilneg];
        arr[ilneg][how_n-1-ilneg] = tmp;
 		printf("\nswap\n");
    }else if(ifpos == -1){printf("\nno_Positive_in_a_mass\n\n");}else{printf("\nno_Negative_in_a_mass\n\n");}
}


void findAndSwapDebug(){
    int tmp,firstPositive,ifpos = -1,lastNegative,ilneg = -1;
    for(int i = 0; i < how_n ; ++i)
    {
        printf("arr[%d][%d]=%d\n",how_n-1-i,i,arr[how_n-1-i][i]);
        if(arr[how_n-1-i][i] >= 0)
        {
            firstPositive = arr[how_n-1-i][i];
            ifpos = i;
            printf("firstPositive = %d\t",firstPositive);
            printf("ifpos=%d",ifpos);
            break;
        }
    }
    printf("\n\n");
    for(int i = 0; i < how_n; ++i) {
        printf("arr[%d][%d]=%d\n",i,how_n-1-i,arr[i][how_n-1-i]);
        if(arr[i][how_n-1-i] < 0)
        {
            lastNegative = arr[i][how_n-1-i];
            ilneg = i;
            printf("lastNegative =%d\t",lastNegative);
            printf("ilneg=%d\n\n",ilneg);
            break;
        }
    }
    if((ifpos != -1)&&(ilneg != -1)) {
        tmp = arr[how_n-1-ifpos][ifpos];
        arr[how_n-1-ifpos][ifpos] = arr[ilneg][how_n-1-ilneg];
        arr[ilneg][how_n-1-ilneg] = tmp;
        printf("sideways diagonal after swapping:");
        for(int i = 0; i < how_n; i++){
            printf("%d\t",arr[how_n-1-i][i]);
        }
    }else if(ifpos == -1){printf("\nno_Positive_in_a_mass\n\n");}else{printf("\nno_Negative_in_a_mass\n\n");}
    printf("\n\n");
}
