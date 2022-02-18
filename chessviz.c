#include <stdio.h>
#define board_size 8
int main()
{
    char board[board_size][board_size]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    for (int i = 0; i < board_size; i++) {
        printf("%d ", board_size - i);
        for (int j = 0; j < board_size; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g j\n");

    return 0;
}
