#include<stdio.h>

int main() {
    
    /*
    Whenever a small integer type is used in an expression, 
    it is implicitly converted to int which is always signed.
    */
    
    /* 1 */
    char n = 30, m = 40, l = 10; 
    char d1 = (n * m) / l;
    char d2 = (char)n * (char)m / (char)l;    
    char d3 = (char)(n * m) / l;    
    printf("%d == %d != %d\n", d1, d2, d3);

    /* 2 */
    unsigned char x = 0;
    unsigned char y = 1;
    printf("%d : %u\n", x - y, x - y);
    /* what really happens: (unsigned int)((int)x - (int)y) */    

    /* 3 */
    unsigned int a = 1;
    signed int b = -2;
    if(a + b > 0)
        printf("-1 is larger than 0.");
    /* what really happens: 
     * (unsigned int)a+(unsigned int)b = 1+4294967294 = 4294967295
     */ 

    /* 4 */
    unsigned short aa = 1;
    signed short bb = -2;
    if(aa + bb > 0)
        printf("-1 is larger than 0"); // will not print

    return 0;
}