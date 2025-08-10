// Question 2 — Find All Possible Paths
// Problem:
// Given a maze, find all the distinct paths from (0,0) to (n-1, n-1). The rat can move Up (U), Down (D), Left (L), Right (R).


#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited) {
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && visited[x][y] == 0);
}

void findPaths(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited, string path, vector<string>& paths) {
    // If reached destination, store the path
    if (x == n-1 && y == n-1) {
        paths.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // Move Down
    if (isSafe(x+1, y, n, maze, visited))
        findPaths(x+1, y, n, maze, visited, path + "D", paths);
    // Move Left
    if (isSafe(x, y-1, n, maze, visited))
        findPaths(x, y-1, n, maze, visited, path + "L", paths);
    // Move Right
    if (isSafe(x, y+1, n, maze, visited))
        findPaths(x, y+1, n, maze, visited, path + "R", paths);
    // Move Up
    if (isSafe(x-1, y, n, maze, visited))
        findPaths(x-1, y, n, maze, visited, path + "U", paths);

    visited[x][y] = 0; // backtrack
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    int n = maze.size();
    vector<vector<int>> visited(n, vector<int>(n, 0));
    vector<string> paths;

    if (maze[0][0] == 1) {
        findPaths(0, 0, n, maze, visited, "", paths);
    }

    if (paths.empty()) {
        cout << "No path found.\n";
    } else {
        cout << "All possible paths:\n";
        for (string p : paths) cout << p << "\n";
    }

    return 0;
}

// Explanation:

// We store all moves as strings (e.g., "DRDR" means Down → Right → Down → Right).

// We try all 4 directions at every step.

// Backtracking ensures we explore new paths without revisiting cells.