#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("No arguments!\n");
        return 1;
    }

    FILE *fptr;
    /**
     * w overwrites everything
     */
    fptr = fopen("even_numbers.txt", "w");
    
    int i;

    for (i = 1; i < argc; ++i) {
        int number = atoi(argv[i]);
        if (number % 2 == 0) {
            fprintf(fptr, "%d\n", number);
        }
    }

    fclose(fptr);

    return 0;
}
