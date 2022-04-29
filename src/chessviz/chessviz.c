#include "printboard.h"
#include "coordinates.h"
#include "move.h"
//#include "libchessviz/coordinates.h"
//#include "libchessviz/printboard.h"
//#include "libchessviz/move.h"
#include <stdio.h>
#include <stdlib.h>
#define board_size 8
#define n 5

int main()
{
    printf("\nIf u want to leave the game write #quite");
    char board[board_size][board_size]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    int x1, y1, x2, y2;
    char input[n];

    printboard(*board);

    while (input[0] != '#' && input[1] != 'q' && input[2] != 'u' && input[3] != 'i' && input[4] != 't') 
    { 
    printf("\n Chose move: \n");
    scanf("%s", input);
    
    x1 = rightX(input[0]);
    y1 = rightY(input[1]);

    x2 = rightX(input[3]);
    y2 = rightY(input[4]);

    if (board[y1][x1] == 'P' || board[y1][x1] == 'p')
    {
        move_pawn(board, x1, y1, x2, y2);
    }
    else
    {
        move(board, x1, y1, x2, y2);
    }
    printboard(*board);
    }
    return 0;
}