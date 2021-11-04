#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(int bombs);
void fillBombs(int table[], int bombs);
void fillZero(int *table);
static void pushBomb(int table[]);

void printTable(int *visible, int *table);

int main(int argc, char *argv[]){
    if (argc == 2){
        int numberOfBombs;
        numberOfBombs = atoi(argv[1]);
        if (3 <= numberOfBombs && numberOfBombs <= 30){
            game(numberOfBombs);
        }else{
            printf("Number of bombs should be between 3 and 30.\n");
        }
    }else{
        printf("Give me a number of bombs!\n");
    }

    return 0;
}

void game(int bombs){
    printf("Number of bombs: %d\n", bombs);
    
    int table[10 * 10];
    int visible[10 * 10];
    char buffer[100];
    
    fillBombs(table, bombs);
    fillZero(visible);
    
    printTable(visible, table);
    while(NULL != fgets(buffer, 100, stdin)){
        printTable(visible, table);
    }
}

void pushBomb(int table[]){
    int x = rand() % 10;
    int y = rand() % 10;
    if (table[x*10 + y] == -1){
        pushBomb(table);
    }else{
        table[x * 10 + y] = -1;
        for (int i = -1; i < 2; i++){
            for (int j = -1; j < 2; j++){
                if (
                    x+i >= 0 && x+i < 10 &&
                    y+j >= 0 && y+j < 10 &&
                    table[(x+i) * 10 + y+j] != -1
                )
                table[(x+i) * 10 + y+j]++;
            }
        }
        /*
        // x-1, y-1
        if (
            x-1 >= 0 && x-1 < 10 &&
            y-1 >= 0 && y-1 < 10 &&
            table[(x-1) * 10 + y-1] != -1
        ){
            table[(x-1) * 10 + y-1]++;
        }
        // x-1, y
        if (
            x-1 >= 0 && x-1 < 10 &&
            y >= 0 && y < 10 &&
            table[(x-1) * 10 + y] != -1
        ){
            table[(x-1) * 10 + y]++;
        }
        // x-1, y+1
        if (
            x-1 >= 0 && x-1 < 10 &&
            y+1 >= 0 && y+1 < 10 &&
            table[(x-1) * 10 + y+1] != -1
        ){
            table[(x-1) * 10 + y+1]++;
        }
        // x, y-1
        if (
            x >= 0 && x < 10 &&
            y-1 >= 0 && y-1 < 10 &&
            table[x * 10 + y-1] != -1
        ){
            table[x * 10 + y-1]++;
        }
        // x, y+1
        if (
            x >= 0 && x < 10 &&
            y+1 >= 0 && y+1 < 10 &&
            table[x * 10 + y+1] != -1
        ){
            table[x * 10 + y+1]++;
        }
        // x+1, y-1
        if (
            x+1 >= 0 && x+1 < 10 &&
            y-1 >= 0 && y-1 < 10 &&
            table[(x+1) * 10 + y-1] != -1
        ){
            table[(x+1) * 10 + y-1]++;
        }
        // x+1, y
        if (
            x+1 >= 0 && x+1 < 10 &&
            y >= 0 && y < 10 &&
            table[(x+1) * 10 + y] != -1
        ){
            table[(x+1) * 10 + y]++;
        }
        // x+1, y+1
        if (
            x+1 >= 0 && x+1 < 10 &&
            y+1 >= 0 && y+1 < 10 &&
            table[(x+1) * 10 + y+1] != -1
        ){
            table[(x+1) * 10 + y+1]++;
        }
        */
    }
}

void fillBombs(int table[], int bombs){
    int i, j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            table[i * 10 + j] = 0;
        }
    }
    srand(time(0));
    for (i = 0; i < bombs; i++){
        pushBomb(table);
    }
}

void fillZero(int *table){
    int i, j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            table[i * 10 + j] = 0;
        }
    }
}

void printTable(int *visible, int *table){
    printf("  ");
    for (int i = 0; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < 10; i++){
        printf("%c ", 'A' + i);
        for (int j = 0; j < 10; j++){
            if (table[i * 10 + j] == -1){
                printf("* ");
            }else{
                printf("%d ", table[i * 10 + j]);
            }
        }
        printf("\n");
    }
}
