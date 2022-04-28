#include <stdio.h>
#include <stdlib.h>
#define board_size 8

void move(char board[board_size][board_size], int x1, int y1, int x2, int y2)
{
    board[y2][x2] = board[y1][x1];
    board[y1][x1] = ' ';
}

void move_pawn(char board[board_size][board_size], int x1, int y1, int x2, int y2, int P_cnt_moves, int p_cnt_moves)
{
    if (board[y2][x2] == ' ' && (x1==x2))
    {
        if(board[y1][x1] == 'P' && (y1>y2))
        {
            if (P_cnt_moves == 0 && (abs(y1-y2) == 2 || abs(y1-y2) == 1))
            {
                move(board, x1, y1, x2, y2);
            }
            else if (P_cnt_moves > 0 && abs(y1-y2) == 1)
            {
                move(board, x1, y1, x2, y2);
            }
            else
            {
                printf("\n WRONG MOVE!");
            }
        }
        else if(board[y1][x1] == 'p' && (y2>y1))
        {
            if (p_cnt_moves == 0 && (abs(y1-y2) == 2 || abs(y1-y2) == 1))
            {
                move(board, x1, y1, x2, y2);
            }
            else if (p_cnt_moves > 0 && abs(y1-y2) == 1)
            {
                move(board, x1, y1, x2, y2);
            }
            else
            {
                printf("\n WRONG MOVE!");
            }
        }
        else
        {
            printf("\n WRONG MOVE!");
        }
    }
    else
    {
        printf("\n WRONG MOVE!");
    }
}