#include <stdio.h>
#include <stdlib.h>

void task(FILE *stream);

int main(int argc, char *argv[]){
    FILE *stream;
    if (argc > 1){
        for (int i = 1; i < argc; i++){
            stream = fopen(argv[i], "r");
            
            if (stream == NULL){
                fprintf(stderr, "File not available: %s\n", argv[i]);    
                continue;
            }
            
            task(stream);
            
            fclose(stream);
        }
    }
    else{
        stream = stdin;
        task(stream);
    }

    return 0;
}



void task(FILE *stream){
    int buffer;
    int *arr;
    int arrCapacity = 0;
    int extension = 3;
    int count = 0;
    
    arr = NULL;
    
    while( 1 == fscanf(stream, "%d", &buffer)){
        if (count >= arrCapacity){
            arrCapacity += extension;
            arr = (int *)realloc(arr, arrCapacity * sizeof(int));
            if (arr == NULL){
                fprintf(stderr, "No memory\n");
                exit(1);
            }
        }
        arr[count] = buffer;
        count++;
    }
    
    int index = 3;
    printf("give me an index!\n");
    scanf("%d", &index);
    
    printf("%d'th element: %d\n", index+1, arr[index]);
    
    free(arr);

}
