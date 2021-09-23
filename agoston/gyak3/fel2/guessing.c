#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int goal = rand() % 100;
    int guess;

    printf("Give me a number!\n");
    scanf("%d", &guess);
    int guessNumber = 1;
    for ( ; guess != goal; ){
    
        //int k = (szam > 0) ? 1 : 0;
        char *str = (guess > goal) ? "smaller" : "larger";
        
        printf("The number is %s than your guess.\n", str);

        printf("Give me a number!\n");
        scanf("%d", &guess);
        guessNumber++;

    }
    
    printf("You found the number!\n");
    
    if (guessNumber < 3){
        printf("You are very lucky\n");
    }else if (guessNumber < 6){
        printf("Nice catch\n");
    }else if (guessNumber > 10){
        printf("You can do it better\n");
    }else{
        printf("Good\n");
    }

    return 0;
}
