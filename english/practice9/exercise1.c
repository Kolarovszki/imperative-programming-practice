#include <stdio.h>
#include <string.h>
#include <stdlib.h>  /* malloc, free */


/**
 * Free the returned variable!
 */
char* mystrcpy(char* string_to_copy) { 
    int length = strlen(string_to_copy);

    char* string_copy = malloc(length * sizeof(char)); /* memory allocation */
                       /* 3     * 4 bytes = 12 bytes */
    strcpy(string_copy, string_to_copy);

    return string_copy;
}


int main() {    
    char string[20];  /* Static, could not be changed runtime */
    
    scanf("%s", string);
    printf("%s\n", string);
    
    char* string_copy = mystrcpy(string);  // different than `strcpy(a, b)`
    /* string_copy will be empty, because mystrcpy deleted it */

    printf("Copy: %s\n", string_copy);

    free(string_copy);

    return 0;
}

/* RULE OF THUMB: For every malloc, there should be a free as well */

