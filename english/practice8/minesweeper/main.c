#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

const int DIM = 10;
const int MINE = -1;
const int NUMBER_OF_MINES = 20;


#define DEBUG 0


typedef struct Cell {
    int adjacent_mines;
    bool is_visible;
} Cell;


void fill_with_zeros(Cell mat[][10]) {
    int i, j;
    for (i = 0; i < DIM; ++i) {
        for (j = 0; j < DIM; ++j) {
            mat[i][j].adjacent_mines = 0;
            mat[i][j].is_visible = false;
        }
        // type(mat[i][j]) == Cell
    }
}

void place_mines(Cell mat[][10]) {
    int number_of_placed_mines = 0;

    while (number_of_placed_mines < NUMBER_OF_MINES) {
        int row = rand() % DIM;
        int column = rand() % DIM;
        Cell cell = mat[row][column];

        if (cell.adjacent_mines != MINE) {
            mat[row][column].adjacent_mines = MINE;
            number_of_placed_mines++;
        }
    }
}


bool in_bounds(int i) {
    return i < DIM && i >= 0;
}


int get_number_of_adjacent_mines(Cell mat[][10], int i, int j) {
    int number_of_mines = 0;

    int adjacent_row;
    int adjacent_column;

    for (adjacent_row = i - 1; adjacent_row <= i + 1; ++adjacent_row) {
        for (adjacent_column = j - 1; adjacent_column <= j + 1; ++adjacent_column) {
            if (adjacent_row == i && adjacent_column == j)
                continue;

            if (
                in_bounds(adjacent_row) && in_bounds(adjacent_column)
                && mat[adjacent_row][adjacent_column].adjacent_mines == MINE
            )
                number_of_mines++;
        }
    } 

    return number_of_mines;
}


void compute_adjacent_mines(Cell mat[][10]) { 
    int i, j;
    for (i = 0; i < DIM; ++i) {
        for (j = 0; j < DIM; ++j) {
            if (mat[i][j].adjacent_mines != MINE) {
                mat[i][j].adjacent_mines = get_number_of_adjacent_mines(mat, i, j);
            }
        }
    }
}


void init_game(Cell mat[][10]) {
    srand(time(0));
    
    fill_with_zeros(mat);
    
    place_mines(mat);

    compute_adjacent_mines(mat);
}


void print_cell(Cell cell) {
    if (cell.is_visible) {
        if (cell.adjacent_mines == MINE) {
            printf(" * ");
        }
        else if (cell.adjacent_mines == 0) {
            printf(" . ");
        }
        else {
            printf(" %d ", cell.adjacent_mines);
        }
    }
    else {
       printf("   "); 
    }
}


void print_game(Cell mat[][10]) {
    int i, j;

    printf(" ");
    
    for (int column = 0; column < DIM; ++column) {
        printf(" %d ", column);
    }
    
    printf("\n");

    for (i = 0; i < DIM; ++i) {
        
        printf("%c", 'A' + i);

        for (j = 0; j < DIM; ++j) {
            print_cell(mat[i][j]);
        }
        printf("\n");
    }
}


bool select_cell(Cell mat[][10], int row, int column) {
    Cell selected_cell = mat[row][column];

    if (selected_cell.adjacent_mines == MINE) {
        return false;
    }

    mat[row][column].is_visible = true;

    return true;
}


int main() {
    Cell mat[DIM][DIM];
    char row_as_char;
    int row, column;
    bool not_exploded = true;

    int number_of_unveiled_cells = 0;

    int winning_condition = DIM * DIM - NUMBER_OF_MINES;

    init_game(mat);

    print_game(mat);
    
    do {
        scanf("%c%d", &row_as_char, &column);
        row = row_as_char - 'A';

        not_exploded = select_cell(mat, row, column);

        ++number_of_unveiled_cells;

        printf("\n");
        print_game(mat);
    } while (not_exploded || number_of_unveiled_cells < winning_condition);
    
    if (not_exploded) {
        printf("You've won!\n");
    } else {
        printf("Exploded!\n");
    }

    return 0;
}
