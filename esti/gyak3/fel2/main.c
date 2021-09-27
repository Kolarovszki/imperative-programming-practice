#include <stdio.h>



int a(int n);
int b(int n);

int main(){
    int number;
    scanf("%d", &number);
    int result = a(number);

    printf("%d\n", result);

    return 0;
}





int a(int n){
    int res = n / 2;
    if (res == 0){
        return 1;
    }else{
        return 1 + b(res);
    }
}
int b(int n){
    int res = n - 1;
    if (res == 0){
        return 1;
    }else{
        return 1 + a(res);
    }
}
