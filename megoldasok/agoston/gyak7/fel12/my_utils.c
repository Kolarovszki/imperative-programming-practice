#include "my_utils.h"

int *max(int *pa, int *pb){
    swap(pa, pb);
    
    if (*pa > *pb){
        return pa;
    }else{
        return pb;
    }
    
}

void swap(int *pa, int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void increase(int *pa){
    (*pa)++;
}


int password(void){
    return 42;
}
