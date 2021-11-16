#include <stdio.h>

void foo(int p){
    int i = 13;
    p = 12;
    
    printf("i: %d, p: %d\n", i, p);
}

int main(void){
    int i, p = 15;
    
    
    foo(p);
    
    i = 17;
    printf("i: %d, p: %d\n", i, p);

    return 0;
}
