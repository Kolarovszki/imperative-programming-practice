#include <stdio.h>

int stringlength(char* string) {
     
    char character = string[0];
    
    int i = 0;

    while (character != '\0') {
        i++;
        character = string[i];
    }

    /* i = 0; string = "abc"; character = 'a'
     * i = 1; character = 'b',
     * i = 3; character = '\0',
     */

    return i;
}


int main () {
    char string[] = "apple";

    char string2[] = {'a', 'p', 'p', 'l', 'e', '\0'};

    printf("First: %s\n", string);
    printf("Second: %s\n", string2);

    printf("Length: %d\n", stringlength("pear"));

    return 0;
}
