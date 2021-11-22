#include <stdio.h>

#define MAXIMUM(a, b) (a < b ? b : a)


int main(){
    int i = 5, j = 11;
    int k;
    
    k = MAXIMUM(i++, j++);
    
    printf("i: %d, j: %d, k: %d\n", i, j, k);

    return 0;
}
