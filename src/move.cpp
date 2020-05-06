#include "header.h"
#include <cstring>
#include <iostream>
#include <stdlib.h>

using namespace std;

int x1 = 0, x2 = 0;
int y1 = 0, y2 = 0;

void move(char mowement[], char board[][9])
{
    if (strlen(mowement) == 5) {
        if (CorrectInput(mowement, board)) {
            movePawn(board);
        }
    } else {
        cout << "Neverny vvod." << endl;
    }
}

void movePawn(char board[][9])
{
    if (board[y1 - 1][x1] == 'p') {
        board[y1 - 1][x1] = ' ';
        board[y2 - 1][x2] = 'p';
    } else if (board[y1 - 1][x1] == 'P') {
        board[y1 - 1][x1] = ' ';
        board[y2 - 1][x2] = 'P';
    }
}

bool CorrectInput(char mowement[], char board[][9])
{
    if (mowement[2] == '-' || mowement[2] == 'x') {
    } else {
        cout << "neverny vvod" << endl;
        return false;
    }
    string transformIntoInt = " ";
    int outOfBoard1 = 0, outOfBoard2 = 9;
    switch (mowement[0]) {
    case 'a':
        x1 = 1;
        break;
    case 'b':
        x1 = 2;
        break;
    case 'c':
        x1 = 3;
        break;
    case 'd':
        x1 = 4;
        break;
    case 'e':
        x1 = 5;
        break;
    case 'f':
        x1 = 6;
        break;
    case 'g':
        x1 = 7;
        break;
    case 'h':
        x1 = 8;
        break;
    }

    switch (mowement[3]) {
    case 'a':
        x2 = 1;
        break;
    case 'b':
        x2 = 2;
        break;
    case 'c':
        x2 = 3;
        break;
    case 'd':
        x2 = 4;
        break;
    case 'e':
        x2 = 5;
        break;
    case 'f':
        x2 = 6;
        break;
    case 'g':
        x2 = 7;
        break;
    case 'h':
        x2 = 8;
        break;
    }
    transformIntoInt[0] = mowement[1];
    y1 = atoi(transformIntoInt.c_str());

    transformIntoInt[0] = mowement[4];
    y2 = atoi(transformIntoInt.c_str());

    if (y1 <= outOfBoard1 || y1 >= outOfBoard2 || x1 <= outOfBoard1
        || x1 >= outOfBoard2 || x2 <= outOfBoard1 || x2 >= outOfBoard2
        || y2 <= outOfBoard1 || y2 >= outOfBoard2) {
        cout << "Incorrect input" << endl;
        return false;
    }
    return true;
}
