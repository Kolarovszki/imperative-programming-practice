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
    int i;
    int number_of_words;

    printf("Number of words: ");

    scanf("%d", &number_of_words); 

    /* MALLOC */

    char** string_array = malloc(number_of_words * sizeof(char*));

    for (i = 0; i < number_of_words; ++i) {
        string_array[i] = malloc(20 * sizeof(char));
    }
    
    /********/

    for (i = 0; i < number_of_words; ++i) {
        scanf("%s", string_array[i]);
    }

    for (i = 0; i < number_of_words; ++i) { 
        char* reversed_string = reverse(string_array[i]);
        printf("%s\n", reversed_string);
        free(reversed_string);
    }

    /* FREE */

    for (i = 0; i < number_of_words; ++i) {
        free(string_array[i]);
    }

    free(string_array);

    /*********/

    return 0;
}


/* RULE OF THUMB: For every malloc, there should be a free as well */

