#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define MINBOMBS 3
#define MAXBOMBS 30

void game(int bombs);
void fillBombs(int table[], int bombs);
void fillZero(int *table);
static void pushBomb(int table[]);
void printTable(int *visible, int *table);

int main(int argc, char *argv[]){
    if (argc == 2){
        int numberOfBombs;
        numberOfBombs = atoi(argv[1]);
        if (MINBOMBS <= numberOfBombs && numberOfBombs <= MAXBOMBS){
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
    
    int table[ROWS * COLS];
    int visible[ROWS * COLS];
    char buffer[100];
    
    fillBombs(table, bombs);
    fillZero(visible);
    
    printTable(visible, table);
    while(NULL != fgets(buffer, 100, stdin)){
        int x, y;
        x = buffer[0] - 'A';
        y = buffer[1] - '0';
        if (0 <= x && x < ROWS && 0 <= y && y < COLS){
            visible[x * COLS + y] = 1;
            
            if (table[x * COLS + y] == -1){
                for (int i = 0; i < ROWS*COLS; i++){
                    visible[i] = 1;
                }
                printTable(visible, table);
                
                printf("You loose\n");
                return;
            }
            
            int counter = 0;
            for (int i = 0; i < ROWS*COLS; i++){
                if (table[i] != -1 && visible[i] == 1){
                    counter++;
                }
            }
            if (counter == ROWS * COLS - bombs){
                printf("You won\n");
                return;
            }
        }        
        
        printTable(visible, table);
    }
}

void pushBomb(int table[]){
    int x = rand() % ROWS;
    int y = rand() % COLS;
    if (table[x*COLS + y] == -1){
        pushBomb(table);
    }else{
        table[x * COLS + y] = -1;
        for (int i = -1; i < 2; i++){
            for (int j = -1; j < 2; j++){
                if (
                    x+i >= 0 && x+i < ROWS &&
                    y+j >= 0 && y+j < COLS &&
                    table[(x+i) * COLS + y+j] != -1
                )
                table[(x+i) * COLS + y+j]++;
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
    for (i = 0; i < ROWS; i++){
        for (j = 0; j < COLS; j++){
            table[i * COLS + j] = 0;
        }
    }
    srand(time(0));
    for (i = 0; i < bombs; i++){
        pushBomb(table);
    }
}

void fillZero(int *table){
    int i, j;
    for (i = 0; i < ROWS; i++){
        for (j = 0; j < COLS; j++){
            table[i * COLS + j] = 0;
        }
    }
}

void printTable(int *visible, int *table){
    printf("  ");
    for (int i = 0; i < COLS; i++){
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < ROWS; i++){
        printf("%c ", 'A' + i);
        for (int j = 0; j < COLS; j++){
            if (visible[i * COLS + j] == 1){
                if (table[i * COLS + j] == -1){
                    printf("* ");
                }else{
                    printf("%d ", table[i * COLS + j]);
                }
            }else{
                printf(". ");
            }
        }
        printf("\n");
    }
}
