#include "my_utils.h"
#include <stdio.h>


void swap(int *a, int *b){
    static int counter = 0;
    printf("This function was called %d times\n", ++counter);

    int temp = *a;
    *a = *b;
    *b = temp;
}

int *max(int *a, int *b){
    return (*a > *b) ? a : b;
}
