#include <stdio.h>

int *f(){
    int j = 13;
    return &j;
}


int main(){
    int *p = f();
    printf("f(): %d\n", *p);

    /*
    int i = 2;
    {
        int i = 4;
        printf("i: %d\n", i);
    }
    printf("i: %d\n", i);

    i = 3;
    */
    return 0;
}
