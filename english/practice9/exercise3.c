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
    char string[20];  /* Static, could not be changed runtime */

    scanf("%s", string);
    
    char* reversed_string = reverse(string);

    printf("%s\n", reversed_string);

    free(string);

    return 0;
}


/* RULE OF THUMB: For every malloc, there should be a free as well */

