#pragma once
#include <iostream>

#define MAX_VALUE 100

class MineSweeper
{
private:
    int _boardSize = 10;
    int _board[MAX_VALUE][MAX_VALUE];
    int _bombCount;
public:
    void printBoard();

};

void MineSweeper::printBoard()
{
    for (int i = 0; i < _boardSize; i++) {
        for (int j = 0; j < _boardSize; j++) {
            cout << _board[i][j];
        }
        cout << endl;
    }
}