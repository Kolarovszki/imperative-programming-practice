#include <stdio.h>


int a(int n);
unsigned int b(unsigned int n);

int main(){
    int i = 12;
    
    a(i);
    b(i);
    
    i = -6;
    a(i);
    b(i);

    return 0;
}


int a(int n){
    int result = -1 * n;
    printf("%d\n", result);
    return result;
}

/*  6   ==   0000000000110 */
/* -6   ==   1111111111010 */
/*  6   ==   0000000000110 */
unsigned int b(unsigned int n){
    unsigned int result = -1 * n;
    printf("%u\n", result);
    return result;
}


