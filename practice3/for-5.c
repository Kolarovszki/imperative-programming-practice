#include<stdio.h>

int main() {
    
    int i;
               
    for(i=0; i<=10; i += 2) {
        printf("Runs %d\n", i);
        // How many times does it run?
    } 

    /*
     * 0: i = 0, no i++, expression: true -> print: 0, i++ -> 1
     * 1: i = 1, i++, i<=10 is true, -> print: 2, i++ -> 3
     * 2: print: 4
     * 3: print: 6
     */

    return 0;
}
