#include <stdlib.h>
#include <stdio.h>

int main()
{
    struct id {
        int i;
        double d;
    } lehet_itt_is_var1, lehet_itt_is_var2;
    
    struct {
        int i;
        double d;
    } masik_forma_nev_nelkul;
    
    struct id s3;
    printf("%llu\n", sizeof(struct id));
    s3.i = 42;
    s3.d = .42;
    printf("%d\n", s3.i);
    printf("%f\n", s3.d);
	
    struct id *s4 = malloc(sizeof(struct id));
    (*s4).i = 40;
    s4->i += 10;
    printf("%d, %d\n", s4->i, (*s4).i);
    free(s4); 
	
    struct id a[100];
    a[50].i = 42;
    (a+50)->i += 10;
    printf("%d\n", a[50].i);
	
    struct id *a2 = malloc(sizeof(struct id)*100);
    a2[0].i = 42;
    a2[0].d = .123;
    printf("%d\n", a2[0].i);
    printf("%f\n", a2[0].d);
    free(a2);
    
    // Egymásba ágyazás?
    
    struct x2 { int i; int j; int k;};
    
    struct x {
         struct x2* s2;
    } *s;
    
    s = malloc(sizeof(struct x));
    s->s2 = malloc(sizeof(struct x2));
    s->s2->i = 44;
    printf("%d\n", s->s2->i);
    free(s->s2);
    free(s);
    
    return 0;
}
