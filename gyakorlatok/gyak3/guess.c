#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generate_secret();
int get_guess();
int inc(int);

int inc(int nr){
    return nr+1;
}

int generate_secret(){
    srand(time(NULL));
    return rand()%100;
}

int get_guess(){
      int guess;
      printf("Tipplej egy számot: ");
      scanf("%d", &guess);
      return guess;
}

int main() {
    int secret = generate_secret();
    int attempts = 1;

    for(;;attempts++) {
        int guess = get_guess();
         
        if(guess == secret){
           printf("Grat! Eltaltáltad!\n");
           break;
        } else {
            if(guess > secret){
                printf("A szám kissebb!\n");
            } else {
                printf("A szám nagyobb!\n");
            }
        }
    } 
    if(3<4<5)
      printf("Játék vége, %d próbálkozás után!\n", attempts);


    return 0;
}
