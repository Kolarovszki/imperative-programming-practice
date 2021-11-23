#include <stdio.h>
#include <stdlib.h>

#define COLUMNBUFFER 32
#define ROWBUFFER 100

/**
 * Reads a line from the file `fp`, returns with 0 if EOF is encountered, 1 for success.
 * Free `line`!
 */
int get_line(FILE* fp, char** line_ptr) {
    char* line = malloc(COLUMNBUFFER * sizeof(char));

    if (line == NULL) {
        perror("Nincs eleg memoria!");
        exit(1);
    }

    int c = fgetc(fp);

    size_t index = 0;
    size_t current_size = COLUMNBUFFER;

    while (c != EOF && c != '\n') {
        if (index == current_size) {
            current_size += COLUMNBUFFER;
            line = realloc(line, current_size * sizeof(char));

            if (line == NULL) {
                perror("Nincs eleg memoria!");
                exit(1);
            }
        }

        line[index] = c;
        index++;
        
        c = fgetc(fp);
    }

    line[index] = '\0';
    
    *line_ptr = line;

    if (c == EOF)
        return 0;

    return 1;
}


int main() {
    char** lines = malloc(ROWBUFFER * sizeof(char*));

    if (lines == NULL) {
        perror("Nincs eleg memoria!");
        exit(1);
    }

    FILE* fp = fopen("example-file.txt", "r");

    if (fp == NULL) {
        perror("Nem lehet megnyitni a fajlt!");
        exit(1);
    }

    size_t index = 0;
    size_t current_size = ROWBUFFER;

    while (get_line(fp, lines + index) != 0) {
        index++;
        if (index == current_size) {
            current_size += ROWBUFFER;
            lines = realloc(lines, current_size * sizeof(char*));
        }
    }
    
    size_t number_of_rows = index;

    for (index = 0; index < number_of_rows; index++) {
        printf("%s\n", lines[index]);
    }

    for (index = 0; index < current_size; index++) {
        free(lines[index]);
    }

    free(lines);
    fclose(fp);

    return 0;
}
