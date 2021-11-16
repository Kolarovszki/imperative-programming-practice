#include <stdio.h>
#include <string.h>

int main(){
    char buffer[200];
    
    while(NULL != fgets(buffer, sizeof(buffer),stdin))
    {
        /* removing '\n' character */
        int lastIndex = strlen(buffer) - 1;
        if ('\n' == buffer[lastIndex]){
            buffer[lastIndex] = '\0';
        }
    
        if (strlen(buffer) > 5){
            printf("%s\n", buffer);
        }
    }

    return 0;
}
