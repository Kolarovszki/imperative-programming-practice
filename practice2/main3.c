#include <stdio.h>


int main() {
    int number;  // Declaring
    
    number = 0;

    printf(
        "My number is: %d",
        number
    );

    // IF STATEMENT
    if (number > 0) {
        printf(" (positive)\n");
    } else if (number < 0) {
        printf(" (negative)\n");
    } else {
        printf(" (zero)\n");
    }

    // TERNARY OPERATOR
    // statement ? variable if statement is true : -//- is false
    return 0;
}
