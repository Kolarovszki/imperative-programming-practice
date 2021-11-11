#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *start);

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
    
    reverse(p);
    
    printf("%s\n", p);
    
    free(p);

    return 0;
}


/*
    a   l   m   a   \0
    0   1   2   3    4
    strlen = 4
    start + 3  == start + strlen - 1
*/
void reverse(char *start){
    char *end = start + strlen(start) - 1;
        
    while (start < end){
        /*swap(start, end);*/
        char temp = *end;
        *end = *start;
        *start = temp;
        
        start++;
        end--;
    }
}
