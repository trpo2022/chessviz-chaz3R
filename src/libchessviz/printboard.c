#include <stdio.h>
#define board_size 8

void printboard(char board[board_size][board_size])
{
    printf("\n\n");
    for (int i = 0; i < board_size; i++) {
        printf("%d  ", board_size - i);
        for (int j = 0; j < board_size; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("#  a b c d e f g h\n");
}