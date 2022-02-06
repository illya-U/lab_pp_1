#include"input.h"
#include"pretty_print.h"
#include"process.h"
#include <stdio.h>



void realese()
{
    printf("realese\n");
    printf("-----With random array and relese function--------\n");
    inputRand();
    outputArr();
    findAndSwapRelease();
    outputArr();

    printf("------With sorted array and release function------------\n");
    inputSorted();
    outputArr();
    findAndSwapRelease();
    outputArr();

    printf("--------With array from keyboard and release function----------\n");
    inputKeyboard();
    findAndSwapRelease();
    outputArr();
}


void debug()
{
    printf("debug\n");
    printf("-----With random array and debug function--------\n");
    inputRand();
    outputArr();
    findAndSwapDebug();
    outputArr();

    printf("------With sorted array and release function------------\n");
    inputSorted();
    outputArr();
    findAndSwapDebug();
    outputArr();

    printf("--------With array from keyboard and release function----------\n");
    inputKeyboard();
    findAndSwapDebug();
    outputArr();
}

