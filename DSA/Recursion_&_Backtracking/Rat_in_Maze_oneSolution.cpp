// 1-Find one path
// 2- Find all paths
// 3- Count the number of paths
// Rat in a Maze Backtracking

// ✅ Normal moves (U, D, L, R)

// ✅ Diagonal moves (↘, ↖, ↙, ↗)

// ✅ Minimum steps path (BFS shortest path logic)

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <climits>
using namespace std;

// Directions for normal and diagonal movement
vector<pair<int, int>> normalMoves = {{1,0},{0,-1},{0,1},{-1,0}};  // D, L, R, U
vector<char> normalDir = {'D','L','R','U'};

vector<pair<int, int>> diagonalMoves = {{1,1},{-1,-1},{1,-1},{-1,1}}; // DR, UL, DL, UR
vector<string> diagonalDir = {"DR","UL","DL","UR"};

// Check if current cell is valid
bool isSafe(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited) {
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && visited[x][y] == 0);
}

// Recursive backtracking function
bool solveMaze(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited,
               string path, vector<string>& allPaths, int& count, int mode, bool allowDiagonal) {
    
    // Base case: reached destination
    if (x == n - 1 && y == n - 1) {
        if (mode == 1) { // Find ONE path
            cout << "Path found: " << path << "\n";
            return true; // stop recursion
        }
        else if (mode == 2) { // Find ALL paths
            allPaths.push_back(path);
        }
        else if (mode == 3) { // Count paths
            count++;
        }
        return false; // continue searching (except in mode 1)
    }

    visited[x][y] = 1;

    // Try normal moves
    for (int i = 0; i < normalMoves.size(); i++) {
        int nx = x + normalMoves[i].first;
        int ny = y + normalMoves[i].second;
        if (isSafe(nx, ny, n, maze, visited) &&
            solveMaze(nx, ny, n, maze, visited, path + normalDir[i], allPaths, count, mode, allowDiagonal) && mode == 1)
            return true;
    }

    // Try diagonal moves if allowed
    if (allowDiagonal) {
        for (int i = 0; i < diagonalMoves.size(); i++) {
            int nx = x + diagonalMoves[i].first;
            int ny = y + diagonalMoves[i].second;
            if (isSafe(nx, ny, n, maze, visited) &&
                solveMaze(nx, ny, n, maze, visited, path + diagonalDir[i], allPaths, count, mode, allowDiagonal) && mode == 1)
                return true;
        }
    }

    visited[x][y] = 0; // Backtrack
    return false;
}

// BFS for shortest path (minimum steps)
int shortestPath(vector<vector<int>>& maze) {
    int n = maze.size();
    if (maze[0][0] == 0 || maze[n-1][n-1] == 0) return -1;

    vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
    queue<pair<int, int>> q;

    dist[0][0] = 0;
    q.push({0,0});

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (auto move : normalMoves) {
            int nx = x + move.first;
            int ny = y + move.second;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && maze[nx][ny] == 1) {
                if (dist[nx][ny] > dist[x][y] + 1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    return dist[n-1][n-1] == INT_MAX ? -1 : dist[n-1][n-1];
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
    vector<string> allPaths;
    int pathCount = 0;

    /*
        Mode:
        1 = Find ONE path
        2 = Find ALL paths
        3 = Count number of paths
    */
    int mode = 2; // Change this for different modes
    bool allowDiagonal = true; // Enable/Disable diagonal moves

    if (maze[0][0] == 1) {
        solveMaze(0, 0, n, maze, visited, "", allPaths, pathCount, mode, allowDiagonal);
    }

    // Output based on mode
    if (mode == 2) {
        cout << "All possible paths:\n";
        for (string p : allPaths) cout << p << "\n";
    }
    else if (mode == 3) {
        cout << "Total number of paths: " << pathCount << "\n";
    }

    // Shortest path
    int minSteps = shortestPath(maze);
    if (minSteps != -1)
        cout << "Minimum steps to reach destination: " << minSteps << "\n";
    else
        cout << "No path exists to destination.\n";

    return 0;
}

// allowDiagonal = true → You can now move diagonally in all four directions.

// Shortest path calculation using BFS (only normal moves).

// Works for finding one path, all paths, or just counting paths.
