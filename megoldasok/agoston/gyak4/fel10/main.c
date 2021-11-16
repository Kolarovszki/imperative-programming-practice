#include <stdio.h>


int main(){
    int i;
    /*char str[] = {'H', 'e', 'l', 'l', 'o'}; without '\0' wrong*/
    char s[20];
    scanf("%s", s);
    

    for (i = 0; '\0' != s[i]; i++){}
    printf("Length: %d\n", i);

    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char szoveg[] = "Hello";


    i = 0;
    while ('\0' != str[i]){
        i++;
    }
    printf("Length: %d\n", i);
    
    for (i = 0; '\0' != szoveg[i]; i++){}
    printf("Length: %d\n", i);

    return 0;
}
