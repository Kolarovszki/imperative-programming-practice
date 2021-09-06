#include <stdio.h>


/* 
Formula: (F − 32) × 5/9
*/


int main() {
    int celsius;
    int fahrenheit;

    // for (beginning; end; something to do between loops)
    for (fahrenheit = -20; fahrenheit <= 200; fahrenheit = fahrenheit + 10) {
        printf("LOOP STARTS\n");
        printf("Fahrenheit: %d\n", fahrenheit);

        celsius = (fahrenheit - 32) * 5.0 / 9.0;

        printf("Celsius: %d\n", celsius);

        printf("LOOP ENDS\n");
    }

    return 0;
}
