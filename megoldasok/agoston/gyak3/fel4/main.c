#include <stdio.h>

int counter = 0;
void a(int number);
void b(int number);


int main(){
    int number;

    printf("Give me a number!\n");
    scanf("%d", &number);

    a(number);

    printf("Number of function calls: %d\n", counter);
    printf("Number of call a: %d\n", counter / 2 + counter % 2);
    printf("Number of call b: %d\n", counter / 2);
    
    return 0;
}

void a(int number){
    counter++;

    int result = number / 2;
    if (result > 0){
        b(result);
    }
}
void b(int number){
    counter++;
    
    int result = number - 1;
    if (result > 0){
        a(result);
    }
}
