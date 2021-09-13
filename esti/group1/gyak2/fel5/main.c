#include <stdio.h>

int main(){
    int n;
    unsigned int i;

    printf("Size of integer: %ld\n", sizeof(int));

    n = 1;
    for (i = 0; i < 8 * sizeof(int)-2; i++){
        n = n * 2 + 1;
    }

    printf("%d\n", n);
    n++;
    printf("%d\n", n);

    return 0;
}
