#include <stdio.h>


#define MAX(a,b) (a > b ? a : b)  // NOT A FUNCTION: IT IS A MACRO


int main() {

    printf("MAX(3, 4): %d\n", MAX(3, 4));
    return 0;
}
