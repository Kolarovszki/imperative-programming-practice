#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    char input[20];

    printf("Input: ");

    scanf("%s", input);

    printf("Cim: %p\n", input);

    size_t length = strlen(input);

    char* masolat = malloc(length * sizeof(char));

    if (masolat == NULL) {
        perror("Nincs eleg memoria!");
        return 1;
    }
    
    // Masolas
    strcpy(masolat, input);
    
    printf("Masolat cime: %p\n", masolat);

    free(masolat);

    return 0;
}
