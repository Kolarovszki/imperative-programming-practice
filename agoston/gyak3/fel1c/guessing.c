#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int goal = rand() % 100;
    int guess;

    printf("Give me a number!\n");
    scanf("%d", &guess);
    for ( ; guess != goal; ){
    
        //int k = (szam > 0) ? 1 : 0;
        char *str = (guess > goal) ? "smaller" : "larger";
        
        printf("The number is %s than your guess.\n", str);

        printf("Give me a number!\n");
        scanf("%d", &guess);

    }
    printf("You found the number!\n");

    return 0;
}
