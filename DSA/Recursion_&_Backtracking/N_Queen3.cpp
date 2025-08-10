// Solve N-Queens and print all solutions (N = 4)

#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<int>& pos, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (pos[i] == col || abs(pos[i] - col) == row - i)
            return false;
    }
    return true;
}

void printSolution(vector<int>& pos, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (pos[i] == j ? "Q " : ". ");
        }
        cout << endl;
    }
    cout << endl;
}

void solveAllNQueens(int n, int row, vector<int>& pos) {
    if (row == n) {
        printSolution(pos, n);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(pos, row, col)) {
            pos[row] = col;
            solveAllNQueens(n, row + 1, pos);
        }
    }
}

int main() {
    int n = 4;
    vector<int> pos(n);
    solveAllNQueens(n, 0, pos);
    return 0;
}
