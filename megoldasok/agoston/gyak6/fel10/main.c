#include <stdio.h>

int main(void){
    FILE *f;
    int i;
    int arr[] = {1, 2, 3, 4, 5, 60, 7, 11, 0, 8, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    f = fopen("even_numbers.txt", "a");
    if (NULL != f){
        for (i = 0; i < len; i++){
            if (arr[i] % 2 == 0){
                fprintf(f, "%d ", arr[i]);
            }
        }
        fprintf(f, "\n");
        
        fclose(f);
    }


    return 0;
}
