#include <stdio.h>
#include <stdlib.h>

#include "negyzet.h"


int main(int argc, char* argv[]) {
    if (argc != 2) {
        perror("Nincs elég argumentum!");
        exit(1);
    }

    int szam = atoi(argv[1]);

    printf("Negyzet: %d\n", negyzet(szam));

    return 0;
}
