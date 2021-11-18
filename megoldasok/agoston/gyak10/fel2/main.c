#include <stdio.h>

#define max(a, b) (a > b ? a : b)

int main() {
    int i = 1;
    int j = 3;
    int k;
    
    k = max(i,j);
    printf("i: %d\n", i);
    printf("j: %d\n", j);
    printf("k: %d\n", k);
    
    k = max(i++,j++);
    printf("i: %d\n", i);
    printf("j: %d\n", j);
    printf("k: %d\n", k);


    return 0;
}
