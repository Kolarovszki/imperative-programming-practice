#include <stdio.h>
#include <stdlib.h>

#include "negyzet_global.h"


int SZAM;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        perror("Nincs elég argumentum!");
        exit(1);
    }

    SZAM = atoi(argv[1]);

    printf("Negyzet: %d\n", negyzet());

    return 0;
}
