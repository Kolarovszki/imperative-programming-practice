#include <stdio.h>

#define GUESS_GOAL 5

int main(){
    int goal = GUESS_GOAL;
    int guess;

    printf("Give me a number!\n");
    scanf("%d", &guess);
    while (guess != goal){
        if (guess > goal){
            printf("The number is smaller than your guess.\n");
        }else{
            printf("The number is greater than your guess.\n");
        }

        printf("Give me a number!\n");
        scanf("%d", &guess);

    }
    printf("You found the number!\n");

    return 0;
}
