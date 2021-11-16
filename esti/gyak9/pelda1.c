/* A feladat, amelyhez a programot írtam:
Olvassunk be egész számokat addig, amíg a felhasználó pozitív számokat ír be.
Az első nempozitív szám után írjuk ki visszafelé sorrendben az összes beírt számot az indexükkel együtt. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int initCapacity = 5;           /* initial capacity of the array */
    int increaseCapacity = 3;       /* we increase the capacity with this value if needed */
    int *arr;                       /* the array pointer */
    int arrCapacity = initCapacity; /* current capacity of the array,*/
                                    /* from this we can see if increse is needed */
    int buffer;                     /* value to read in */
    int counter = 0;                /* counter how many integers were typed */

    /* first input */
    scanf("%d", &buffer);
    
    /* dynamic array allocation on heap */
    arr = (int *)malloc(initCapacity * sizeof(int));
    
    /* checking whether arr is NULL */
    if (NULL == arr){
        fprintf(stderr, "No memory\n");
        exit(1);
    }
    
    /* loop until the buffer is positive */
    while (buffer > 0){
    
        if (counter < arrCapacity){
            /* we have space for new elem in arr */
            arr[counter++] = buffer;
        }else{
            /* we have to increase size of arr */
            arrCapacity += increaseCapacity;
            /* with realloc all the available data is copied into the new place */
            /* sometimes it does not have to be copied since it can be increased in place */
            arr = (int *)realloc(
                arr,
                arrCapacity * sizeof(int)
            );
            /* checking whether arr is NULL */
            if (NULL == arr){
                fprintf(stderr, "No memory\n");
                exit(1);
            }
            
            arr[counter++] = buffer;
        }
        
        scanf("%d", &buffer);
    }
    
    for (int i = counter - 1; i >= 0; i--){
        printf("%d : %d\n", i, arr[i]);
    }
    
    free(arr);
    

}
