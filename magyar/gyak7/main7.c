#include <stdio.h>

int increment() {
    static int i = 0;
    i++;

    return i;
}


int main() {

    for (int j = 0; j < 5; j++)
        printf("%d: %d\n", j, increment());

    return 0;
}

