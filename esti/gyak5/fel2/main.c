#include <stdio.h>

void swap(int *first, int *second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main(){
    int a, b;
    a = 19;
    b = 21;
    
    printf("a: %d, b: %d\n", a, b);
    
    swap(&a, &b);

    printf("a: %d, b: %d\n", a, b);
    
    return 0;
}
