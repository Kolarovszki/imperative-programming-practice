#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Error, we need the filename too!");
        return 1;
    }
    
    char word[50];

    FILE *fp;

    fp = fopen(argv[1], "r");

    unsigned int c;

    unsigned int number_of_whitespaces = 0;

    while ( (c = fgetc(fp)) != EOF) {
        printf("c: %c\n", c);
        if (c == ' ' || c == '\n') {
            ++number_of_whitespaces;
        }
    }

    printf("Number of spaces: %d\n", number_of_whitespaces);

    printf("Number of words: %d\n", number_of_whitespaces + 1);
    fclose(fp);

    return 0;
}
