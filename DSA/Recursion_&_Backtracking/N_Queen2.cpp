// Count all possible solutions for N-Queens (N = 4)

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

void countNQueens(int n, int row, vector<int>& pos, int& count) {
    if (row == n) {
        count++;
        return;
    }
    for (int col = 0; col < n; col++) {
        if (isSafe(pos, row, col)) {
            pos[row] = col;
            countNQueens(n, row + 1, pos, count);
        }
    }
}

int main() {
    int n = 4, count = 0;
    vector<int> pos(n);
    countNQueens(n, 0, pos, count);
    cout << "Total solutions: " << count << endl;
    return 0;
}
