#include<stdio.h>
int main() {
    
    int i = 42, j = 0;
    
    for(i=0; i<3; j=++i) {printf("%d ",j);}
    
    printf("\n");

    j = 0;
    
    for(i=0; i<3; j=i++) {printf("%d ",j);}
    
    return 0;
}
