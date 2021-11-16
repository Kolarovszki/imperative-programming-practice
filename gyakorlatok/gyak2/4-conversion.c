#include<stdio.h>
int main() {
    char ch;
    int i = 321;
    
    /* downcasts */
    
    printf("Downcasts: %d, %d, %c\n", ch = i, (char)i, (char)i);
    
    /* upcast */
    printf("Upcasts: %d, %d\n", sizeof(i+ch), sizeof(ch+i));
    
    /*******************************/
    
    double pi = 3.14159;
    int j;
    /* downcasts */
    printf("Downcasts: %d, %d\n", j = pi, (int)pi);

    /* upcast */
    printf("Upcasts: %d, %d\n", sizeof(j+pi), sizeof(pi+j));
    
    /************************/
    
    int score = 17;
    /* convert this from a 0..20 range to a 0..100 range */
    
    int s1 = (score / 20) * 100;  
    /* NO -- score/20 truncates to 0 */
    
    int s2 = ((double)score / 20) * 100;
    /* OK -- floating point division from cast */
    
    int s3 = (score / 20.0) * 100;
    /* OK -- floating point division from 20.0 */
    
    int s4 = (int)(score / 20.0) * 100;
    /* NO -- the (int) truncates the floating quotient back to 0 */
    
    printf("%d, %d, %d, %d", s1, s2, s3, s4);
    
    return 0;
}