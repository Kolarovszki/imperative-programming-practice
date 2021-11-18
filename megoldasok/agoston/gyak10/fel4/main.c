#include <stdio.h>
#include "math.h"


int main(void){
    for (int a = 12; a < 15; a++){    
        printf("a: %d, a^2 : %d\n", a, sq(a));
    }
    return 0;
}
