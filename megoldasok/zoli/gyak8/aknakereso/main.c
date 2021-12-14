#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

//#define DEBUG

#ifdef DEBUG

#include <assert.h>

#endif


typedef struct Cell {
    bool mine;
    bool is_exposed;
    int neighbouring_mines;
} Cell;


typedef struct Board {
    int size;
    int exposed_cells_to_win;
    Cell** cells;
} Board;


typedef struct Input {
    int row;
    int column;
} Input;


int generate_index(int size) {
    return rand() % size;
}


void plant_mines(Board* board, int number_of_mines) {
    int i, j;

    int planted_mines = 0;

    int size = board->size;

    while (planted_mines != number_of_mines) {
        i = generate_index(size);
        j = generate_index(size);

        bool already_mine = board->cells[i][j].mine;

        if (!already_mine) {
            board->cells[i][j].mine = true;
            planted_mines++;
        }
    }
}


bool is_valid_index(int i, int j, int size) {
    return (
        i >= 0 && i < size
        && j >= 0 && j < size
    );
}


int calculate_neighbouring_mines(Board* board, int x, int y) {
    if (board->cells[x][y].mine) {
        return 0;
    }

    // x -> i, y -> j
    int i, j;

    int accumulator = 0;

    for (i = x - 1; i <= x + 1; i++) {
        for (j = y - 1; j <= y + 1; j++) {
            if (
                is_valid_index(i, j, board->size)
                && board->cells[i][j].mine
            ) {
                accumulator++;
            }
        }
    }

    return accumulator;
}


void calculate_board(Board* board) {
    int i, j;

    for (i = 0; i < board->size; i++) {
        for (j = 0; j < board->size; j++) {
            board->cells[i][j].neighbouring_mines = calculate_neighbouring_mines(board, i, j);            
        }
    }
}


void calculate_exposed_cells_to_win(Board* board, int number_of_mines) {
    int size = board->size;

    board->exposed_cells_to_win = size * size - number_of_mines;
}


int init_board(Board* board, int size, int number_of_mines) {
    board->size = size;

    board->cells = malloc(size * sizeof(Cell*));

    if (board->cells == NULL) {
        return 1;
    }

    int i;

    for (i = 0; i < size; i++) {
        board->cells[i] = malloc(size * sizeof(Cell));
        
        if (board->cells[i] == NULL) {
            return 1;
        }
    }

    plant_mines(board, number_of_mines);

    calculate_board(board);

    calculate_exposed_cells_to_win(board, number_of_mines);

    return 0;
}

void print_cell(Cell cell) {
    printf(" ");  // Formatting space

    if (!cell.is_exposed) {
        printf(".");
        return;
    }

    bool is_mine = cell.mine;

    if (is_mine) {
        printf("x");
    }
    else if (cell.neighbouring_mines == 0) {
        printf(" ");
    }
    else {
        printf("%d", cell.neighbouring_mines);
    }
}


void print_board(Board* board) {
    int size = board->size;
    
    int i, j;

    printf(" ");

    for (i = 0; i < size; i++) {
        printf(" %d", i);
    }
    printf("\n");

    for (i = 0; i < size; i++) {
        printf("%c", 'A' + i);

        for (j = 0; j < size; j++) {
            print_cell(board->cells[i][j]);
        }
        printf("\n");
    }
}

void free_board(Board* board) {
    int i;

    for (i = 0; i < board->size; i++) {
        free(board->cells[i]);
    }

    free(board->cells);
}

void scan_input(Input* input) {
    char row_index_character;

    int column;

    /// NOTE: Extra space for avoiding scanning whitespace
    scanf(" %c%d", &row_index_character, &column);

    input->row = row_index_character - 'A';
    input->column = column;
}


bool play_turn(Board* board) {
    print_board(board);

    Input input;
    scan_input(&input);

#ifdef DEBUG
    printf("DEBUG: Row: %d, column: %d\n", input.row, input.column);
    assert(is_valid_index(input.row, input.column, board->size));
#endif

    bool is_mine = board->cells[input.row][input.column].mine;

    if (is_mine) {
        return true;
    }

    board->cells[input.row][input.column].is_exposed = true;

    return false;
}


int get_number_of_exposed_cells(Board* board) {
    int i, j;

    int accumulator = 0;

    for (i = 0; i < board->size; i++) {
        for (j = 0; j < board->size; j++) {
            Cell cell = board->cells[i][j];
            if (cell.is_exposed) {
                accumulator++;
            }
        }
    }

    return accumulator;
}


bool check_winning_conditions(Board* board) {
    int number_of_exposed_cells = get_number_of_exposed_cells(board);

#ifdef DEBUG
    printf("DEBUG: number_of_exposed_cells=%d, exposed_cells_to_win=%d\n", number_of_exposed_cells, board->exposed_cells_to_win);
#endif


    return number_of_exposed_cells == board->exposed_cells_to_win;
}


int main(int argc, char* argv[]) {
    srand(time(NULL));

    if (argc < 3) {
        fprintf(stderr, "Not enough arguments!\n");
        return 1;
    }

    int size = atoi(argv[1]);
    
    int number_of_mines = atoi(argv[2]);

    if (number_of_mines > size * size) {
        fprintf(stderr, "Too much mines!");
        return 2;
    }

    Board board;

    init_board(&board, size, number_of_mines);
   
    bool exploded = false;
    bool won = false;

    do {
        exploded = play_turn(&board);
        won = check_winning_conditions(&board);
    } while(!exploded && !won);

    print_board(&board);
    
    if (exploded) {
        printf("You've lost!\n");
    }

    if (won) {
        printf("You've won!\n");
    }


    free_board(&board);
    
    return 0;
}
