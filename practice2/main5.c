#include <stdio.h>
#include <stdbool.h>

int main() {
    char string[] = "string";  // Declaring
    
    string = 'c';

    printf(
        "My string is: %s",
        string
    );

    return 0;
}
