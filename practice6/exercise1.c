#include <stdio.h>

/**
 * argc: int,
 *   - No argument: 1
 *   - 1 argument: 2
 *   - 2 arguments: 3
 *   ...
 * argv: array of strings
 */

int main(int argc, char* argv[]) {
   
    printf("Number of arguments: %d\n", argc);

    int i;

    for (i = 0; i < argc; ++i) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
