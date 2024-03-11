#pragma once
#include <iostream>
using namespace std;
#define MAX_VALUE 100

class MineSweeper
{
private:
    int _boardSize = 10;
    char _board[MAX_VALUE][MAX_VALUE] = {'0'};
    int _bombCount;
    int _flagCount = 0;
public:
    MineSweeper();
    ~MineSweeper();
    void generateBoard(); 
    void printBoard();

};

MineSweeper::MineSweeper()
{
    for (int i = 0; i < _boardSize; i++) {
        for (int j = 0; j < _boardSize; j++) {
            _board[i][j] = '0';
        }
    } 
}

MineSweeper::~MineSweeper()
{
    
}

void MineSweeper::printBoard()
{
    for (int i = 0; i < _boardSize; i++) {
        for (int j = 0; j < _boardSize; j++) {
            cout << _board[i][j];
        }
        cout << endl;
    }
}