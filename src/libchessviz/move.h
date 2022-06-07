#pragma once
#define board_size 8

int movecheck(
        char board[board_size][board_size], int x1, int y1, int x2, int y2);

void move(char board[board_size][board_size], int x1, int y1, int x2, int y2);

void move_pawn(
        char board[board_size][board_size], int x1, int y1, int x2, int y2);