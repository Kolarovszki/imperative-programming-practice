#include<stdio.h>


int main() {
    
    int i = 42, j = 0;
    
    for(i=0; i<3; j=++i) {
        printf("%d ",j);
    }

    /**
     * 0: -> 0
     * 1: -> 1
     * 2: -> 2
     * 3: 3<3 doesn't hold, exit
     */
    
    printf("\n");

    j = 0;

    for(i=0; i<3; j=i++) {
        printf("%d ",j);
    }

    /**
     * 0: i=0, j=0
     * 1: i=1, j=0
     * 2: (j=i++) i=2, j=1
     * 3: condition doesn't hold: (i<3), (3<3)
     */

    return 0;
}
