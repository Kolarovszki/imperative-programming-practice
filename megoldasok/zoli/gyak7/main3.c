#include <stdio.h>


void func() {
}

int main() {

    {
        int szam = 42;
    }

    printf("Szam: %d\n", szam);

    func();

    return 0;
}

