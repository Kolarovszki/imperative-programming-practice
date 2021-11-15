#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *x = malloc(4);
    *x = 42;
    printf("%d\n", *x);
    free(x);
    
    // Dinamikus tömb, VLA-k helyett
    int n;
    printf("Tomb merete? ");
    scanf("%d", &n);
    int *a = malloc(sizeof(int)*n);
    a[123] = 42;
    *(a+124) = 43;
    printf("%d, %d\n", *(a+123), a[124]);
    free(a);
	
    return 0;
}
