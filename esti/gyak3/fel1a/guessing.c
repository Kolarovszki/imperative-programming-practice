#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int target = rand() % 100;
    int guess;
    
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
    }
    printf("You found the number!\n");
    
    return 0;
}
