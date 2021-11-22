#include <stdio.h>
#include <stdlib.h>

int main(){
    int buffer;
    
    int capacity = 1;
    int counter = 0;

    
    int *arr;
    arr = (int *)malloc(capacity * sizeof(int));
    
    
    if (arr == NULL){
        printf("No memory\n");
        exit(1);
    }
    
    scanf("%d", &buffer);
    while(buffer > 0){
        /* I need to increase */
        if (counter + 1 > capacity){
            /* increasing of arr */
            capacity *= 2;
            arr = (int *)realloc(arr, capacity * sizeof(int));
            
            if (arr == NULL){
                printf("No memory\n");
                exit(1);
            }
            
        }
        
        arr[counter++] = buffer;
        
        scanf("%d", &buffer);
    }
    
    for (int i = 0; i < counter; i++){
        printf("%d, ", arr[i]);
    }
    
    
    free(arr);
    
    return 0;   
}
