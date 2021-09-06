#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* reverse(char* string_to_reverse) { 
    int length = strlen(string_to_reverse) - 1; 
    int i;
    char *reversed_string = malloc((length + 1) * sizeof(char));

    for (i = 0; i <= length; ++i) {
        reversed_string[i] = string_to_reverse[length - i];
    }
     
    return reversed_string;
}


int main() {    
    char string_array[5][20];  /* Static, could not be changed runtime */
    int i;

    for (i = 0; i < 5; ++i) {
        scanf("%s", string_array[i]);
    }

    for (i = 0; i < 5; ++i) { 
        char* reversed_string = reverse(string_array[i]);
        printf("%s\n", reversed_string);
        free(reversed_string);
    }

    return 0;
}


/* RULE OF THUMB: For every malloc, there should be a free as well */

