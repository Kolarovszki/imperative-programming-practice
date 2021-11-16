#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* reversed(char* str) {
    size_t length = strlen(str);
    
    char* eleje = str;
    char* vege = str + length - 1;
    char tmp;

    while (eleje < vege) {
        tmp = *eleje;
        *eleje = *vege;
        *vege = tmp;

        eleje++;
        vege--;
    }

    return str;
}


int main() {
    char input[21];

    printf("Input: ");

    scanf("%s", input);

    printf("Forditott: %s\n", reversed(input));

    return 0;
}
