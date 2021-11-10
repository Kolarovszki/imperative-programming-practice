#include <stdio.h>
#include "my_utils.c"

int main(){
    int i, j;
    i = 15;
    j = 23;
    
    printf("i: %d, j: %d\n", i, j);
    swap(&i, &j);

    printf("i: %d, j: %d\n", i, j);
    
    (*max(&i, &j))++;
    
    printf("i: %d, j: %d\n", i, j);
    swap(&i, &j);
    (*max(&i, &j))++;
    
    printf("i: %d, j: %d\n", i, j);
    
    printf("max: %d\n", *max(&i, &j));

    return 0;
}

