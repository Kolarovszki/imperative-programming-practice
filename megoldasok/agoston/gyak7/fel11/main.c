#include <stdio.h>
#include "my_utils.h"

int main(void){
    int a = 12, b = 17;
    
    
    printf("a = %d, b = %d\n", a, b);
    printf("maximum: %d\n", *max(&a, &b));
    
    swap(&a, &b);
    
    printf("a = %d, b = %d\n", a, b);
    printf("maximum: %d\n", *max(&a, &b));
    
    for (int i = 0 ; i < 20; i++)
        increase(&a);
    
    printf("a = %d, b = %d\n", a, b);
    printf("maximum: %d\n", *max(&a, &b));


    return 0;
}
