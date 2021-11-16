#include <stdio.h>

void foo(int a, int /*a*/b){
    printf("Sum: %d\n", a + b);
}


int main(void){
    foo(3, 4);

    return 0;
}
