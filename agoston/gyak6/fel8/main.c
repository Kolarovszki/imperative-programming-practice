#include <stdio.h>

int main(){
    FILE *fp;
    char name[50];
    
    /* Getting name of user */
    printf("Please give me your name!\n");
    scanf("%s", name);
    
    /* open file "player.txt for write */
    fp = fopen("player.txt", "w");
    if (fp){
        /* if openin was succesful */
        fprintf(fp, "%s\n", name);
    }
    
    fclose(fp);
    
    return 0;
}
