#include <stdio.h>

int main(){
    char str1[] = "almafa";
    /*char str2[] = {'a', 'l', 'm', 'a', '\0'};*/
    char str2[] = "Zlmafa";

    int i = 0;
    int length = sizeof(str1) / sizeof(str1[0]);


    printf("%d\n", length);
    while ( str1[i] == str2[i] && i < (length-1) ){
        i++;
    }
    if (str1[i] < str2[i]){
        printf("First word is smaller.\n");
    }else if (str1[i] > str2[i]){
        printf("Second word is smaller.\n");
    }else{
        printf("The words are the same.\n");
    }
    
    
    
    return 0;
}
