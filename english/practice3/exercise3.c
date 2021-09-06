#include <stdio.h>

// MACRO
#define CONSTANT 012


int get_target() {
    int guess;
    scanf("%d", &guess);
    return guess;
}

/* 
 * Returns: number of guesses.
 */
int guessing() {
    int number_of_guesses = 0x0;
    
    int guess = get_target();
    
    while (guess != CONSTANT) {
        number_of_guesses++;
 
        printf(
          "%s\n", 
          guess > CONSTANT ? "TOO BIG" : "TOO SMALL"
        );
        guess = get_target();
    }
    return number_of_guesses;
}


// SIDE EFFECT: with no return value
void evaluate(int number_of_guesses) { 
    printf("Number of guesses: %d\n", number_of_guesses);

    printf("RIGHT GUESS\n");
}


int main() {

    int number_of_guesses = guessing();
    
    evaluate(number_of_guesses);

    return 0;
}
