#include <stdio.h>
#include <string.h>


int main(){
    char buffer[200];
    int lastIndex;

    while (NULL!=fgets(buffer,sizeof(buffer),stdin))
    {
        /* removing potential newline */
        lastIndex = strlen(buffer)-1;
        if ( '\n' == buffer[lastIndex] ){
            buffer[lastIndex] = '\0';
        }
        
        /* exercise */
        if ( NULL != strpbrk(buffer, "0123456789") ){
            printf("%s\n", buffer);
        }
    }

    return 0;
}
