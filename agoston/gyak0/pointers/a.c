#include <stdio.h>


void f(int *p){
    *p += 3;
    
    printf("my parameter: %p, &p: %p\n", p, &p);
}

int main(void){
    int i, j;
    i = 11;
    j = 21;
    int *p;
    
    printf("i: %d, j: %d, &i: %p, &j: %p, p: %p, &p: %p\n", i, j, &i, &j, p, &p);
    f(&i);
    printf("i: %d, j: %d, &i: %p, &j: %p, p: %p, &p: %p\n", i, j, &i, &j, p, &p);
    
    

    return 0;
}
