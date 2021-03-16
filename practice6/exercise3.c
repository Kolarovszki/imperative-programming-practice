#include <stdio.h>
#include <stdlib.h>



/**
 * n! = n * (n - 1) * (n - 2) * ... * 2 * 1
 *
 * 0! = 1
 * 1! = 1
 * 2! = 2 * 1 = 2 = 2 * (2 - 1)!
 * 3! = 3 * 2 * 1 = 3 * 2!
 * 4! = 4 * 3 * 2 * 1 = 4 * 3!
 *
 * Generally
 *
 * n! = n * (n - 1)!
 */
int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

/**
 * Example: 4
 * 1. n = 4 -> return 4 * 3!, then return 4 * 6 = 24
 * 2. n = 3 -> return 3 * 2!, then return 6
 * 3. n = 2 -> return 2 * 1!, then 1! is evaluated, return 2
 * 4. n = 1 -> return 1 * 0!, then 0! is evaluated as 1, return 1
 * 5. n = 0 -> return 1, doesn't call itself again.
 */


int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);

    printf("Factorial: %d\n", factorial(n));

    return 0;
}
