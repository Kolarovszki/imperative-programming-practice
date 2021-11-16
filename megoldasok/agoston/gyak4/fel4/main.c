#include <stdio.h>

#define LENGTH 100


int main(){
    int arr[LENGTH];
    int i;
    int sum = 0;
    int sum2 = 0;
    
    for (i = 0; i < LENGTH; i++){
        arr[i] = i;
    }
    
    for (i = 0; i < LENGTH; i++){
        sum = sum + arr[i];
        sum2 += arr[i];
    }
    printf("sum : %d\n", sum);
    printf("sum2: %d\n", sum2);
    printf("expected: %d\n", (100 * 99 / 2));
    
    printf("\n");


    return 0;
}
