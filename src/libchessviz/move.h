# pragma once
#define board_size 8

void move(char board[board_size][board_size], int x1, int y1, int x2, int y2);

void move_pawn(char board[board_size][board_size], int x1, int y1, int x2, int y2, int P_cnt_moves, int p_cnt_moves);