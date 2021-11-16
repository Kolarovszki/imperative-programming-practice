#include <stdio.h>

/* logging with normal implementation */
/* every case has break               */
void logging(int t, char *msg);

/* logging with some mistakes            */
/* without default branch                */
/* higher numbers than 2 are not treated */
void loggingWithoutDefault(int t, char *msg);

/* logging with some mistakes */
/* break commands missing     */
void loggingWithoutBreaks(int t, char *msg);


int main(){
    char conErrMsg[] = "could not connect to server";

    printf("\nNormal logging:\n\n");
    logging(0, "program started.");
    logging(4, "user signed in.");
    logging(2, conErrMsg);
    
    printf("\nWithout default:\n\n");
    loggingWithoutDefault(0, "program started.");
    loggingWithoutDefault(4, "user signed in.");
    loggingWithoutDefault(2, conErrMsg);
    
    printf("\nWithout breaks:\n\n");
    loggingWithoutBreaks(0, "program started.");
    loggingWithoutBreaks(4, "user signed in.");
    loggingWithoutBreaks(2, conErrMsg);


    return 0;
}

void logging(int t, char *msg){
    switch (t)
    {
        case 0:
            printf("INFO - %s\n", msg);
            break;
        case 1:
            printf("WARNING - %s\n", msg);
            break;
        case 2:
            printf("ERROR - %s\n", msg);
            break;
        /* any number except 0,1,2 */
        default:
            printf("LOG - %s\n", msg);
            break;
    }
}


void loggingWithoutDefault(int t, char *msg){
    switch (t)
    {
        case 0:
            printf("INFO - %s\n", msg);
            break;
        case 1:
            printf("WARNING - %s\n", msg);
            break;
        case 2:
            printf("ERROR - %s\n", msg);
            break;
        case 3:
            printf("LOG - %s\n", msg);
            break;
    }
}


void loggingWithoutBreaks(int t, char *msg){
    switch (t)
    {
        case 0:
            printf("INFO - %s\n", msg);
        case 1:
            printf("WARNING - %s\n", msg);
        case 2:
            printf("ERROR - %s\n", msg);
        /* any number except 0,1,2 */
        default:
            printf("LOG - %s\n", msg);
    }
}

