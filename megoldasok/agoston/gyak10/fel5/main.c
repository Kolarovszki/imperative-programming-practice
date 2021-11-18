#include <stdio.h>
#include "math.h"


int main(void){
    for (int a = 12; a < 15; a++){
        sqParam = a;
        printf("a: %d, ", a);
        sq();
        printf("a^2 : %d\n", sqParam);
    }
    return 0;
}
