#include <stdio.h>
#include <stdlib.h>

int main(void){
    int buffer;
    int *arr;
    int currentCapacity = 5;
    int extension = 3;
    int count = 0;
    
    arr = (int *)malloc(currentCapacity * sizeof(int));
    if (arr == NULL){
        printf("No available memory\n");
        exit(1);
    }
    scanf("%d", &buffer);
    
    while(buffer > 0){
        arr[count++] = buffer;
        
        if (count >= currentCapacity){
            /* increase array */
            currentCapacity += extension;
            arr = (int *)realloc(arr, currentCapacity * sizeof(int));
            
            if (arr == NULL){
                printf("No available memory\n");
                exit(1);
            }
        }
    
        scanf("%d", &buffer);
    }
    /* output in reverse order */
    for (count--; count >= 0; count--){
        printf("%d : %d\n", count, arr[count]);
        
        /*sum(f(a), f(b));*/
    }
    
    free(arr);

    return 0;
}
