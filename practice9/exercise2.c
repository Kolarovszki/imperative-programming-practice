#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char* string_to_reverse) { 
    int length = strlen(string_to_reverse) - 1;
    
    int i;

    for (i = 0; i < (length + 1) / 2; ++i) {
        char first = string_to_reverse[i];
        char last = string_to_reverse[length - i]; 
        
        string_to_reverse[i] = last;
        string_to_reverse[length - i] = first;
    }

}


int main() {    
    char string[20];  /* Static, could not be changed runtime */
    
    scanf("%s", string);
    
    reverse(string);

    printf("%s\n", string);

    return 0;
}

/* RULE OF THUMB: For every malloc, there should be a free as well */

