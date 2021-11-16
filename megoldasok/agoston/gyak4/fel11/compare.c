#include <stdio.h>

int main(){
    char s1[] = "Zabcdefghi";
    char s2[] = "Zabcdefq";
    int i = 0;
    /* s1[0] == 97 */
    /* tudok ilyet írni: s1[0] > s2[0] */
    while (s1[i] == s2[i]){
        ++i;
    }
    
    if (s1[i] > s2[i]){
        printf("s2 is smaller.\n");
    }else{
        printf("s1 is smaller.\n");
    }

    return 0;
}
