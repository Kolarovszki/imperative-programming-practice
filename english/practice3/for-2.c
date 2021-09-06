#include<stdio.h>

int main() {
    
    int i;

    /*
    i--; // THE SAME AS i = i - 1
    i = i - 1;
    
    i++;
    i = i + 1;

    --i;

    ++i;

    */

               //--i -> 10, i-- -> 9
    for(i=0; 10>=--i; i = i + 2) {

        printf("Runs %d\n", i);
        // How many times does it run?
    } 

    /* Check condition == (i = i - 1)
     * 0th loop: i = 0, but we check the condition, whic has i--
     * in it: i = -1,   CONDITION: 10 >= -1 (--i), 10 >= 0 (i--)
     * 1st loop: i = -1, we check condition (decrease i) -> i = -2, but we run ((i += 2) == (i = i + 2)), i = 0, CONDITION: 10 >= 0, 
     * 2nd loop: i = 0 -> i = 1
     * 3rd loop: i = 1 -> i = 2
     *
    */

    return 0;
}
