/**
 * fifteen.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Implements Game of Fifteen (generalized to d x d).
 *
 * Usage: fifteen d
 *
 * whereby the board's dimensions are to be d x d,
 * where d must be in [DIM_MIN,DIM_MAX]
 *
 * Note that usleep is obsolete, but it offers more granularity than
 * sleep and is simpler to use than nanosleep; `man usleep` for more.
 */

#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// constants
#define DIM_MIN 3
#define DIM_MAX 9

// board
int board[DIM_MAX][DIM_MAX];

// dimensions
int d;

// prototypes

void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool won(void);
bool hacer_operacion(int tile, int bal_fila, int bal_col, int BalFil, int BalCol);

int main(int argc, string argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %i x %i and %i x %i, inclusive.\n",
            DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }

    // open log
    FILE* file = fopen("log.txt", "w");
    if (file == NULL)
    {
        return 3;
    }

    // greet user with instructions
    greet();

    // initialize the board
    init();

    // accept moves until game is won
    while (true)
    {
        // clear the screen
        clear();

        // draw the current state of the board
        draw();

        // log the current state of the board (for testing)
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }
            fprintf(file, "\n");
        }
        fflush(file);

        // check for win
        if (won())
        {
            printf("ftw!\n");
            break;
        }

        // prompt for move
        printf("Tile to move: ");
        int tile = get_int();

        // quit if user inputs 0 (for testing)
        if (tile == 0)
        {
            break;
        }

        // log move (for testing)
        fprintf(file, "%i\n", tile);
        fflush(file);

        // move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            usleep(500000);
        }

        // sleep thread for animation's sake
        usleep(500000);
    }

    // close log
    fclose(file);

    // success
    return 0;
}

/**
 * Clears screen using ANSI escape sequences.
 */
void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

/**
 * Greets player.
 */
void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF FIFTEEN\n");
    usleep(2000000);
}

/**
 * Initializes the game's board with tiles numbered 1 through d*d - 1
 * (i.e., fills 2D array with values but does not actually print them).
 */
void init(void)
{

    int i, j, number = 0;
    int ult_fila, seg_ult_col, ter_ult_col, swap;

    number = (d * d) - 1;

    for (i = 0; i < d; i++){
        for (j = 0; j < d; j++){
            board[i][j] = number;
            number--;
        }
    }

    if (d % 2 == 0){
        ult_fila = (d - 1);
        seg_ult_col = (d - 2);
        ter_ult_col = (d - 3);

        swap = board[ult_fila][seg_ult_col];
        board[ult_fila][seg_ult_col] = board[ult_fila][ter_ult_col];
        board[ult_fila][ter_ult_col] = swap;
    }

    return;
    // TODO
}

/**
 * Prints the board in its current state.
 */
void draw(void)
{

    int i = 0, j;

    for (; i < d; i++){
        for (j = 0; j < d; j++)
            printf("%2i ", board[i][j]);
        printf("\n");
    }

    // TODO
}

/**
 * If tile borders empty space, moves tile and returns true, else
 * returns false.
 */
bool move(int tile)
{
    int BalCol, BalFil, BalColTwo, BalFilTwo, BalColThree, BalFilThree, BalColFour, BalFilFour;
    bool bal_e = false;
    int i, j, bal_fila, bal_col;

    for (i = 0; i < d; i++){
        for (j = 0; j < d; j++){
            if (board[i][j] == tile){
                bal_fila = i;
                bal_col = j;
                bal_e = true;
                break;
            }
        }
    }

    if (!bal_e){
        return false;
    }

    BalCol = bal_col;
    BalFil = bal_fila + 1;
    if (hacer_operacion(tile, bal_fila, bal_col, BalFil, BalCol)){
        return true;
    }

    BalColTwo = bal_col;
    BalFilTwo = bal_fila - 1;
    if (hacer_operacion(tile, bal_fila, bal_col, BalFilTwo, BalColTwo)){
        return true;
    }

    BalColThree = bal_col + 1;
    BalFilThree = bal_fila;
    if (hacer_operacion(tile, bal_fila, bal_col, BalFilThree, BalColThree)){
        return true;
    }

    BalColFour = bal_col - 1;
    BalFilFour = bal_fila;
    if (hacer_operacion(tile, bal_fila, bal_col, BalFilFour, BalColFour)){
        return true;
    }

    // TODO
    return false;
}

bool hacer_operacion(int tile, int bal_fila, int bal_col, int BalFil, int BalCol){
    int final, swap;
    if (BalFil >= 0 && BalCol <= (d-1) && BalCol >= 0 && BalCol <= (d-1)){
        final = board[BalFil][BalCol];

        if (final == 0){
            swap = final;

            board[BalFil][BalCol] = tile;
            board[bal_fila][bal_col] = swap;

            return true;
        }
    }

    return false;
}

/**
 * Returns true if game is won (i.e., board is in winning configuration),
 * else false.
 */
bool won(void)
{

    int number_apost = 1, ult_fil = (d-1), ult_col = (d-1), i, j;

    for (i = 0; i < d; i++){
        for (j = 0; j < d; j++){
            if (board[i][j] != board[ult_fil][ult_col]){
                if (board[i][j] == number_apost){
                    number_apost++;
                } else {
                    return false;
                }
            } else {
                return true;
            }
        }
    }

    // TODO
    return false;
}