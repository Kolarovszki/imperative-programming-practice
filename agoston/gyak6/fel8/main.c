#include <stdio.h>

int main(){
    FILE *fp;
    char name[500];
    
    /* Getting name of user */
    fprintf(stdout, "Please give me your name!\n");
    fscanf(stdin, "%s", name);
    
    /* open file "player.txt for write */
    fp = fopen("player.txt", "w");
    if (fp){
        /* if openin was succesful */
        fprintf(fp, "%s\n", name);
        
        fclose(fp);
    }
    
    
    return 0;
}
