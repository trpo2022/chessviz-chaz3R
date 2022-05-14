#include <ctest.h>
#include <libchessviz/coordinates.h>
#include <libchessviz/move.h>
#include <libchessviz/printboard.h>
#define board_size 8
#define n 5

char board[board_size][board_size]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

int x1, y11, x2, y2;

char input[n];

CTEST(ctest, write1)
{
    int flag;
    input[0] = 'e';
    input[1] = '2';
    input[2] = '-';
    input[3] = 'e';
    input[4] = '4';
    if (input[0] != '#' && input[1] != 'q' && input[2] != 'u'
            && input[3] != 'i' && input[4] != 't') {
            x1 = rightX(input[0]);
            y11 = rightY(input[1]);

            x2 = rightX(input[3]);
            y2 = rightY(input[4]);

            flag = movecheck(board, x1, y11, x2, y2);
    }
    else{
        flag = 1;
    }

    const int result = flag;
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(ctest, write2)
{
    int flag;
    input[0] = 'e';
    input[1] = '7';
    input[2] = '-';
    input[3] = 'e';
    input[4] = '5';
    if (input[0] != '#' && input[1] != 'q' && input[2] != 'u'
            && input[3] != 'i' && input[4] != 't') {
            x1 = rightX(input[0]);
            y11 = rightY(input[1]);

            x2 = rightX(input[3]);
            y2 = rightY(input[4]);

            flag = movecheck(board, x1, y11, x2, y2);
    }
    else{
        flag = 1;
    }

    const int result = flag;
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(ctest, write3)
{
    int flag;
    input[0] = 'd';
    input[1] = '1';
    input[2] = '-';
    input[3] = 'd';
    input[4] = '3';
    if (input[0] != '#' && input[1] != 'q' && input[2] != 'u'
            && input[3] != 'i' && input[4] != 't') {
            x1 = rightX(input[0]);
            y11 = rightY(input[1]);

            x2 = rightX(input[3]);
            y2 = rightY(input[4]);

            flag = movecheck(board, x1, y11, x2, y2);
    }
    else{
        flag = 1;
    }

    const int result = flag;
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}