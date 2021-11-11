#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char buffer[20];
    int length;
    
    scanf("%s", buffer);
    
    length = strlen(buffer) + 1;
    
    char *p;
    p = (char *)malloc(length * sizeof(char));
    
    if (NULL == p){
        printf("No memory available\n");
        return 1;
    }
    
    for (int i = 0; i < length; i++){
        p[i] = buffer[i];
        /*
        *(p + i) = *(buffer + i)
        */
    }
    
    printf("%s\n", p);
    
    free(p);

    return 0;
}
