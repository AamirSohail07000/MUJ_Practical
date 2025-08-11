// Normal moves only
// Maze:
// 1 0 0 0
// 1 1 0 1
// 0 1 0 0
// 1 1 1 1

// int mode = 2;          // Find ALL paths
// bool allowDiagonal = false; // No diagonal moves

#include <bits/stdc++.h>
using namespace std;

// Directions for normal moves: Down, Right, Up, Left
int dRow[] = {1, 0, -1, 0};
int dCol[] = {0, 1, 0, -1};
char moveChar[] = {'D', 'R', 'U', 'L'}; // To record path

// Function to check if a cell is inside the maze and open
bool isSafe(int row, int col, vector<vector<int>>& maze, vector<vector<bool>>& visited) {
    int n = maze.size();
    return (row >= 0 && col >= 0 && row < n && col < n && maze[row][col] == 1 && !visited[row][col]);
}

// Recursive backtracking function
void solve(int row, int col, vector<vector<int>>& maze, vector<vector<bool>>& visited, string path, vector<string>& allPaths, int& minSteps) {
    int n = maze.size();

    // Base case: reached destination
    if (row == n - 1 && col == n - 1) {
        allPaths.push_back(path);
        minSteps = min(minSteps, (int)path.size()); // update min steps
        return;
    }

    // Mark as visited
    visited[row][col] = true;

    // Explore all directions (no diagonals)
    for (int i = 0; i < 4; i++) {
        int newRow = row + dRow[i];
        int newCol = col + dCol[i];

        if (isSafe(newRow, newCol, maze, visited)) {
            solve(newRow, newCol, maze, visited, path + moveChar[i], allPaths, minSteps);
        }
    }

    // Backtrack
    visited[row][col] = false;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    int n = maze.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<string> allPaths;
    int minSteps = INT_MAX;

    if (maze[0][0] == 1) {
        solve(0, 0, maze, visited, "", allPaths, minSteps);
    }

    cout << "All Paths: \n";
    for (string path : allPaths) cout << path << endl;

    cout << "Minimum steps = " << minSteps << endl;
    return 0;
}
