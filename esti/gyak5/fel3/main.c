#include <stdio.h>

int main(){
    int i = 3, j = 5;
    
    int *p = &i;
    int **pp = &p;
    printf("i: %d, j: %d, *p: %d, **pp: %d\n", i, j, *p, **pp);

    *pp = &j;
    
    printf("i: %d, j: %d, *p: %d, **pp: %d\n", i, j, *p, **pp);
    
    **pp = 19;

    printf("i: %d, j: %d, *p: %d, **pp: %d\n", i, j, *p, **pp);
    return 0;
}
