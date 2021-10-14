#include <stdio.h>

int fact(int number){
    /* terminating */
    if (number < 2){
        return 1;
    }
    /* recursive */
    else{
        return number * fact(number - 1);
    }

}

/*
fact(5) = 5 * 4 * 3 * 2 * 1
fact(4) = 4 * 3 * 2 * 1
fact(3) = 3 * 2 * 1
fact(2) = 2 * 1
fact(1) = 1
*/


int main(void){
    printf("10! : %d\n", fact(10));

    return 0;
}



