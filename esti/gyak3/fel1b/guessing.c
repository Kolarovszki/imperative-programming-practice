#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int target = rand() % 100;
    int guess;
    int numberOfTries = 1;
    
    printf("Give me a number!\n");
    scanf("%d", &guess);

    while (guess != target){
        if (guess > target){
            printf("Your number is greater than the target.\n");
        }else{
            printf("Your number is smaller than the target.\n");
        }
        
        printf("Give me a number!\n");
        scanf("%d", &guess);
        numberOfTries++;
    }
    printf("You found the number!\n");
    
    if (numberOfTries < 5){
        printf("Nice catch\n");
    }else if (numberOfTries > 10){
        printf("You can do it better!\n");
    }else{
        printf("Good\n");
    }
    
    
    return 0;
}
