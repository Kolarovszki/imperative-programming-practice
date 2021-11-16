#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 100

/**
 *  Szabadíts fel!
 */
char* readWord() {
    char input[BUFFERSIZE];

    scanf("%s", input);

    int length = strlen(input);

    char* new_str = malloc((length + 1) * sizeof(char));

    if (new_str == NULL) {
        perror("Nincs elég memória!");
        exit(1);
    }

    strcpy(new_str, input);

    return new_str;
}


int main(int argc, char* argv[]) { 
    if (argc != 2) {
        perror("Nincs eleg argumentum!");
        exit(2);
    }

    int no_of_words = atoi(argv[1]);

    char** stringek_tombje = malloc(
        no_of_words * sizeof(char*)
    );

    if (stringek_tombje == NULL) {
        perror("Nincs elég memória!");
        exit(1);
    }

    // Beolvasás
    int i;
    for (i = 0; i < no_of_words; i++) {
        printf("%d: \n", i);
        char* word = readWord();

        if (strcmp(word, "end") == 0) {
            no_of_words = i;
            break;
        }

        stringek_tombje[i] = word;
    }

    stringek_tombje = realloc(
        stringek_tombje,
        no_of_words * sizeof(char*)
    );

    // Business logic :)
    for (i = no_of_words - 1; i >= 0; i--) {
        printf("%s\n", stringek_tombje[i]);
    }

    // Felszabaditas
    for (i = 0; i < no_of_words; i++) {
        free(stringek_tombje[i]);
    }
    
    free(stringek_tombje);

    return 0;
}
