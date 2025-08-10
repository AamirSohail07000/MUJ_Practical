// Question 3 — Count the Number of Paths
// Problem:
// Count how many ways the rat can reach (n-1, n-1) from (0,0).

#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited) {
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && visited[x][y] == 0);
}

int countPaths(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited) {
    if (x == n-1 && y == n-1) return 1; // reached destination

    visited[x][y] = 1;
    int totalPaths = 0;

    // Move Down
    if (isSafe(x+1, y, n, maze, visited))
        totalPaths += countPaths(x+1, y, n, maze, visited);
    // Move Right
    if (isSafe(x, y+1, n, maze, visited))
        totalPaths += countPaths(x, y+1, n, maze, visited);
    // Move Up
    if (isSafe(x-1, y, n, maze, visited))
        totalPaths += countPaths(x-1, y, n, maze, visited);
    // Move Left
    if (isSafe(x, y-1, n, maze, visited))
        totalPaths += countPaths(x, y-1, n, maze, visited);

    visited[x][y] = 0; // backtrack
    return totalPaths;
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

    int result = 0;
    if (maze[0][0] == 1) {
        result = countPaths(0, 0, n, maze, visited);
    }

    cout << "Number of possible paths: " << result << "\n";
    return 0;
}

// Explanation:

// Instead of storing paths, we return 1 when destination is reached and sum up results from all moves.

// This method is pure counting using recursion + backtracking.