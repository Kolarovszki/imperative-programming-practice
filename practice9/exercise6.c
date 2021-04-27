#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

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
    int number_of_words = 0;

    /* MALLOC */

    char** string_array = malloc(number_of_words * sizeof(char*));
    
    /********/

    char temp[20];
    bool terminated;
    
    do {
        scanf("%s", temp);
        terminated = (strcmp(temp, "END") == 0);

        if (!terminated) {
            string_array = realloc(string_array, (number_of_words + 1) * sizeof(char*));

            char* new_string = malloc(20 * sizeof(char));

            strcpy(new_string, temp);

            string_array[number_of_words] = new_string;

            number_of_words++;
        }

    } while (!terminated);

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

