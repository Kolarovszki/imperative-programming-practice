#include <stdio.h>

void increment(int *p)
{
    (*p)++;
}

int main(){
    int i = 2;
    
    printf("i: %d\n", i);
    increment(&i);
    printf("i: %d\n", i);
    int *pi;
    int **ppi;
    ppi = &pi;
    
    pi = &i;
    
    /*
    i = 3;
    */
    *pi = 5;
    
    printf("i: %d\n", i);
    
    **ppi = 7;
    printf("i: %d\n", i);

    return 0;
}
