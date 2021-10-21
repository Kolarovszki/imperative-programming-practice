#include <stdio.h>

int v = 10;


int main(void){
    printf("v: %d\n", v);
    
    {
        int v;
        printf("v: %d\n", v);
        v = 12;
        printf("v: %d\n", v);
    }
    
    printf("v: %d\n", v);

    return 0;
}
