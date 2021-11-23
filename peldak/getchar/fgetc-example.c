#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 32

/**
 * Reads a line from the file `fp`, returns with 0 if EOF is encountered, 1 for success.
 */
int get_line(FILE* fp, char* line) {
    int c;
 
    if (line == NULL) {
        perror("Nincs eleg memoria!");
        exit(1);
    }

    c = fgetc(fp);

    size_t index = 0;

    while (c != EOF && c != '\n') {
        if (index == BUFSIZE - 1) {
            perror("Line is too long!");
            exit(1);
        }

        line[index] = c;
        index++;
        
        c = fgetc(fp);
    }

    line[index] = '\0';
    
    if (c == EOF)
        return 0;

    return 1;
}


int main() {
    char line[BUFSIZE];

    FILE* fp = fopen("example-file.txt", "r");

    if (fp == NULL) {
        perror("File could not be opened!");
        exit(1);
    }

    while (get_line(fp, line) != 0) {
        printf("%s\n", line);
    }

    fclose(fp);

    return 0;
}
