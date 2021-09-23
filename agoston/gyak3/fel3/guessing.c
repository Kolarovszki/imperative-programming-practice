#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getTarget();
int input();
int guessing(int goal);
void evaluate(int guessNumber);

int main(){
    int target = getTarget();
    
    int guessNumber = guessing(target);
    
    evaluate(guessNumber);
    
    return 0;
}



int getTarget(){
    srand(time(NULL));

    return rand() % 100;
}

int input(){
    int guess;

    printf("Give me a number!\n");
    scanf("%d", &guess);
    
    return guess;
}

int guessing(int goal){
    int guess;
    int guessNumber = 1;
    
    for (guess = input(); guess != goal; guess = input()){
    
        //int k = (szam > 0) ? 1 : 0;
        char *str = (guess > goal) ? "smaller" : "larger";
        
        printf("The number is %s than your guess.\n", str);

        
        guessNumber++;

    }
    
    return guessNumber;
}

void evaluate(int guessNumber){
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
    
    return;
}

