#include <stdio.h>

int main(){
    int i, c;

    printf("size of integer: %lu\n", sizeof(int));

    // sizeof(int) * 8
    // 00000000000000000000
    //                 1111
    // 01111111111111111111
    // 10000000000000000000

    i = 1;
    for (c = 0; c < 30; c = c+1){
        i = 2 * i + 1;
    }
    printf("%d\n", i);
    i = i+1;
    printf("%d\n", i);



    return 0;
}
