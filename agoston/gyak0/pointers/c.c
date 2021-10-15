#include <stdio.h>


void beolvas(int *i){
    scanf("%d", i);
    
}

int main(void){
    int i;
    double d;
    char name[50];
    int arr[10];
    
    beolvas(&i);
    scanf("%lf", &d);
    scanf("%s", name);
    scanf("%d", arr+3);

    return 0;
}
