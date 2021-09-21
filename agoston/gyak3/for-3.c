#include<stdio.h>

int main() {
    
    int i;
    //++i esetén más lenne?
    for(i=5; i++; i-=2) {
        printf("Fut %d\n", i);
        // Vajon hányszor fut le?
    } 

    return 0;
}
