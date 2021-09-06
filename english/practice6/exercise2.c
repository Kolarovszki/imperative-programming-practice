#include <stdio.h>
#include <stdlib.h>

/**
 * argc: int,
 *   - No argument: 1
 *   - 1 argument: 2
 *   - 2 arguments: 3
 *   ...
 * argv: array of strings
 */

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);  // int a = (char*)
    int b = atoi(argv[2]);

    printf("Product: %d\n", a * b);

    // TODO: Multiply with a loop and additions.
    // 3 * 4 = 3 + 3 + 3 + 3.

    return 0;
}
