#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 100

#define NO_OF_WORDS 5

/**
 *  Szabadíts fel!
 */
char* readWord() {
    char input[BUFFERSIZE];

    scanf("%s", input);

    int length = strlen(input);

    char* new_str = malloc(length * sizeof(char));

    if (new_str == NULL) {
        perror("Nincs elég memória!");
        exit(1);
    }

    strcpy(new_str, input);

    return new_str;
}


int main() {
    char* stringek_tombje[NO_OF_WORDS];
    
    // Beolvasás
    int i;
    for (i = 0; i < NO_OF_WORDS; i++) {
        stringek_tombje[i] = readWord();
    }

    // Business logic :)
    for (i = NO_OF_WORDS - 1; i >= 0; i--) {
        printf("%s\n", stringek_tombje[i]);
    }

    // Felszabaditas
    for (i = 0; i < NO_OF_WORDS; i++) {
        free(stringek_tombje[i]);
    }

    return 0;
}
