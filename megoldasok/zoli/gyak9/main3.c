#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Szabaditsd fel a visszateresi erteket!
 */
char* reversed(char* str) {
    size_t length = strlen(str);
    
    char* uj_str = malloc((length + 1) * sizeof(char));

    if (uj_str == NULL) {
        perror("Nincs eleg memoria!");
        exit(1);
    }
    
    size_t i = 0;

    for (i = 0; i < length; i++){
        uj_str[i] = str[length - i - 1];
    }

    uj_str[length] = '\0';

    return uj_str;
}


int main() {
    char input[21];

    printf("Input: ");

    scanf("%s", input);

    char* reversed_input = reversed(input);
    
    printf("Forditott: %s\n", reversed_input);

    free(reversed_input);

    return 0;
}
