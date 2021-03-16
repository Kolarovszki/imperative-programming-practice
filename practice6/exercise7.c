#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("No file specified!\n");
        return 1;
    }

    FILE *fptr;
    /**
     * w overwrites everything
     * a append the file
     * r reading
     */
    if ( (fptr = fopen(argv[1], "r")) == NULL) {
        printf("No such file!\n");
        return 2;
    }

    int number;

    int sum = 0;

    while ( fscanf(fptr, "%d", &number) == 1 ) {
        sum = sum + number;
    }

    printf("sum: %d\n", sum);

    fclose(fptr);

    return 0;
}
