#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getTarget();
int guessing(int target);
void evaluate(int numberOfTries);
int giveMeANumber();

int numberOfTries = 0;

int main(){
    int target = getTarget();
    
    int numberOfTries = guessing(target);

    evaluate(numberOfTries);

    
    
    return 0;
}


int getTarget(){
    srand(time(0));

    return rand() % 100;
}
int guessing(int target){
    int guess;
    
    guess = giveMeANumber();
    while (guess != target){
        if (guess > target){
            printf("Your number is greater than the target.\n");
        }else{
            printf("Your number is smaller than the target.\n");
        }
        
        guess = giveMeANumber();
    }
    printf("You found the number!\n");
    
    return numberOfTries;
}
int giveMeANumber(){
    int guess;
    printf("Give me a number!\n");
    scanf("%d", &guess);
    numberOfTries++;
    return guess;
}

void evaluate(int numberOfTries){
    if (numberOfTries < 5){
        printf("Nice catch\n");
    }else if (numberOfTries > 10){
        printf("You can do it better!\n");
    }else{
        printf("Good\n");
    }
}


