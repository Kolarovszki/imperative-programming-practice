#include <stdio.h>


// What is the reason of using operator& in scanf() when reading an
// integer?


int main () {
    int i;

    scanf("%d", &i);

    printf("%d\n", i);
    return 0;
}
