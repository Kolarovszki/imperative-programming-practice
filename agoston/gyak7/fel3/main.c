#include <stdio.h>

void foo(int p){
    int i = 13;
    int t;
    if (p == 3){
        printf("memory address of t: %p\n", &t);
        int t = 9;
        printf("memory address of t: %p\n", &t);
        i++;
        printf("My parameter is 3\n");
    }else{
        int t = 13;
        --i;
        printf("My parameter is not 3\n");
    }
    t++;
    
    {
        int i = 7;
        printf("i: %d, p: %d\n", i, p);
    }
    
    p = 12;
    
    printf("i: %d, p: %d\n", i, p);
}

int main(void){
    int i, p = 15;
    
    
    foo(3);
    
    i = 17;
    printf("i: %d, p: %d\n", i, p);

    return 0;
}
