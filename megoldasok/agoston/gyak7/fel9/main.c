#include <stdio.h>

int *max(int *pa, int *pb);
int *max2(int *pa, int *pb);
int *max3(int *pa, int *pb);


int main(void){
    int a = 23;
    int b = 19;
    int *pa = &a;
    int *pb = &b;
    
    int *p;
    
    p = max(&a, &b);
    printf("p: %p, *p: %d\n", (void*)p, *p);    
    
    p = max2(pa, pb);
    printf("p: %p, *p: %d\n", (void*)p, *p);    
    
    p = max3(pa, &b);
    printf("p: %p, *p: %d\n", (void*)p, *p);    
    
    return 0;
}



int *max(int *pa, int *pb){
    if (*pa > *pb){
        return pa;
    }else{
        return pb;
    }
}

/* same as above */
int *max2(int *pa, int *pb){
    return *pa > *pb ? pa : pb;
}

/* same as above */
int *max3(int *pa, int *pb){
    int a = *pa;
    int b = *pb;
    if (a > b){
        return pa;
    }else{
        return pb;
    }    
}
