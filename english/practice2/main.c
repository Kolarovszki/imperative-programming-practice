#include <stdio.h>


int main() {
    int number;  // Declaring
    
    number = 6;

    printf(
        "My number is: %d",
        number
    );

    // IF STATEMENT
    if (number % 2 == 0) {
        printf(" (even)\n");
    } else {
        printf(" (odd)\n");
    }

    // TERNARY OPERATOR
    // statement ? variable if statement is true : -//- is false
    return 0;
}
