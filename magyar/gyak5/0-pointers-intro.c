#include<stdio.h>

int main() {

    int i = 123;
    
    printf("Value: %d, memory address: %p\n", i, &i);
    
    /*
    A pointer egy speciális típusú és felhasználású változó,
    mely egy memóriacímet - általában egy másik változóét -
    tartalmaz.
    */
    int *j = &i;
    
    /*
    int* j   or   int *j   (means the same to the compiler)
    
    int* i, j  or  int *i, *j    (means two different things!!!)
    */
    
    i = 220;
    
    printf("Value(an address): %p\n", j); 
    printf("The value stored at that address: %d\n", *j);
    
    /*
    Tömb vs pointer
    */
    
    int arr[] = {10,11,12,13};
    
    printf("arr: %p\n", arr);
    printf("*arr: %d\n", *arr);
    printf("arr[1] == (arr+1)[0] == *(arr+1): %d == %d == %d\n"
          , arr[1], (arr+1)[0], *(arr+1));
    
    printf("*((char*)arr+4): %d\n", *((char*)arr+4));
    
    return 0;
}