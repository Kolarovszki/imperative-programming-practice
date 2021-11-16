#include<stdio.h>

int main() {

    char a=65;      /* at least 8 bits,  -128   .. 127*/
    short b=0;      /* at least 16 bits, -32768 .. 32767*/
    int c=0;        /* at least 16 bits, typical 32 bits */ 
    long d=0;       /* at least 32 bits, ~-2 billion .. ~2 billion */
    long long dd=0; /* at least 64 bits, if supported */
    
    printf("%c, %hi, %i, %li, %li\n", a, b, c, d, dd);
    
    /* unsigned */
    
    unsigned char ua=100;     /* 0 .. 255*/
    unsigned short ub=0;      /* 0 .. 65535*/
    unsigned int uc=0;        /* 0 .. */ 
    unsigned long ud=0;       /* 0 .. */
    unsigned long long udd=0; /* 0 .. */
    
    printf("%c, %hu, %u, %lu, %lu\n", ua, ub, uc, ud, udd);
    
    /* integer literals */
    
    printf("%d,   %c,  %d,   %d,  %d,      %d,     %u\n", 
           'a',  'a', 012, 0x45, 45L, (3u-5u), (3u-5u));
    
    /* floats */
    
    float f = 3.14f;         /* typically 32 bits, ~6 digits precision */
    double fd = 3.14;        /* typically 64 bits, ~15 digits precision */
    long double lfd = 3.14l; /* even bigger */
    
    printf("%f, %lf, %Lf\n", f, fd, lfd);
    
    /* floating point literals */
    
    printf("%f, %f, %f, %f\n"
          , 3.14159, 314.159E-2, 314159E-5, 0.0314159E+2);
    
    /* type of literals by default */
    
    printf("%d\t", sizeof(2.5) == sizeof(double));
    printf("%d\t", sizeof(2)   == sizeof(int));
    printf("%d\t", sizeof('A') == sizeof(char)); 
    
    /* void, the type for no-value */
    
    // void v;       // compile error
    
    return 0;
}

void exit(int status);

int rand(void);
