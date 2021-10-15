#include <stdio.h>

int main(void){
    int i;
    int *p;
    int **pp;
    
    i = 3;
    p = &i;
    pp = &p;
    
    printf("i: %d\n", i);
    
    *p = 4;
    
    printf("i: %d\n", i);

    **pp = 5;

    printf("i: %d\n", i);


    return 0;
}
