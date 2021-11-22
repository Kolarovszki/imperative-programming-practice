#include <stdio.h>
#include <stdlib.h>

#define BUFFER 4

int main() {
    int* array = malloc(BUFFER * sizeof(int));
    
    if (array == NULL) {
        perror("Nincs eleg memoria!");
        exit(1);
    }

    int szam;

    scanf("%d", &szam);

    int i = 0;
    int current_size = BUFFER;
    while (szam > 0) {
        array[i] = szam;
        i++;
        if (i == current_size) {
            array = realloc(
                array,
                (current_size + BUFFER) * sizeof(int)
            );
        }
        scanf("%d", &szam);
    }

    int j;

    for (j = 0; j < i; j++) {
        printf("%d\n", array[i - j - 1]);
    }

    free(array);

    return 0;
}
