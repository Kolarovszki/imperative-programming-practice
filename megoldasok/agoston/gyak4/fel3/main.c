#include <stdio.h>

#define LENGTH 100


int main(){
    int arr[LENGTH]/* = {0}*/;
    int i;
    
    for (i = 0; i < LENGTH; i++){
        arr[i] = 0;
    }
    
    for (i = 0; i < LENGTH; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");


    return 0;
}
