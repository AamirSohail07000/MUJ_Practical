// N-Queens Problem (Basic Backtracking)
// 📘 Concept:
// You need to place N queens on an N×N chessboard so that no two queens attack each other.

// Use recursion to place one queen per row.

// For each row, try placing the queen in every column.

// Check if the current position is safe (no attack from previous queens).

// Solve and print one solution for N=4

#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
    // Check same column
    for (int i = 0; i < row; i++)
        if (board[i][col]) return false;

    // Check upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) return false;

    // Check upper-right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
        if (board[i][j]) return false;

    return true;
}

bool solveNQueens(vector<vector<int>>& board, int row, int n) {
    if (row == n) return true;

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 1;
            if (solveNQueens(board, row + 1, n)) return true;
            board[row][col] = 0; // backtrack
        }
    }

    return false;
}

void printBoard(vector<vector<int>>& board, int n) {
    for (auto row : board) {
        for (auto cell : row) cout << (cell ? "Q " : ". ");
        cout << endl;
    }
}

int main() {
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    if (solveNQueens(board, 0, n)) printBoard(board, n);
    else cout << "No solution\n";
    return 0;
}
