#include <stdio.h>

void swap(int *pa, int *pb);


int main(void){
    int a = 7, b = 9;
    int *pa = &a, *pb = &b;
    
    printf("a : %d, b : %d\n", a, b);
    
    swap(pa, pb);
    
    printf("a : %d, b : %d\n", a, b);

    swap(&a, pb);
    
    printf("a : %d, b : %d\n", a, b);

    swap(&a, &b);
    
    printf("a : %d, b : %d\n", a, b);

    return 0;
}

void swap(int *pa, int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}


