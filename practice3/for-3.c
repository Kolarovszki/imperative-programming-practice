#include<stdio.h>

int main() {
    
    int i;

    // i++: Increment i for the next expression!

    //++i case?
    for(i=5; i++; i-=2) { /// Last round i = 0, (i++) == 0
        printf("Runs %d\n", i);
        // How many times does it run?
    } 

    /*
     * 0: i = 5, i++ -> 6
     * 1: (i = 6) i-=2, i++ -> 5
     * 2: -> 4
     * 3: -> 3
     * 4: -> 2
     * 5: i -= 2 (i = 0), THEN evaluate expression (i++) -> CONDITION is false 
     *
     *
    */

    return 0;
}
