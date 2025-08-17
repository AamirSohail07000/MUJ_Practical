// Count paths
// Maze:
// 1 1 1
// 1 0 1
// 1 1 1

// int mode = 3;          // Count only
// bool allowDiagonal = false; // Only normal moves

#include <bits/stdc++.h>
using namespace std;

int dRow[] = {1, 0};
int dCol[] = {0, 1};

bool isSafe(int row, int col, vector<vector<int>>& maze, vector<vector<bool>>& visited) {
    int n = maze.size();
    return (row >= 0 && col >= 0 && row < n && col < n && maze[row][col] == 1 && !visited[row][col]);
}

void countPaths(int row, int col, vector<vector<int>>& maze, vector<vector<bool>>& visited, int steps, int& pathCount, int& minSteps) {
    int n = maze.size();

    if (row == n - 1 && col == n - 1) {
        pathCount++;
        minSteps = min(minSteps, steps);
        return;
    }

    visited[row][col] = true;

    for (int i = 0; i < 2; i++) {
        int newRow = row + dRow[i];
        int newCol = col + dCol[i];

        if (isSafe(newRow, newCol, maze, visited)) {
            countPaths(newRow, newCol, maze, visited, steps + 1, pathCount, minSteps);
        }
    }

    visited[row][col] = false;
}

int main() {
    vector<vector<int>> maze = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    int n = maze.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int pathCount = 0;
    int minSteps = INT_MAX;

    if (maze[0][0] == 1) {
        countPaths(0, 0, maze, visited, 0, pathCount, minSteps);
    }

    cout << "Count = " << pathCount << endl;
    cout << "Minimum steps = " << minSteps << endl;
    return 0;
}
