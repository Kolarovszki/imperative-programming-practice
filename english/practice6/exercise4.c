#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Bad arguments!");
        return 1;
    }

    FILE *fptr;

    fptr = fopen("player.txt", "w");

    fprintf(fptr, "%s %s", argv[1], argv[2]);

    fclose(fptr);

    return 0;
}
