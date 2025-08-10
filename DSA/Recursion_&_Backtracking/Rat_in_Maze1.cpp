// Concept: Rat in a Maze
// The Rat in a Maze problem is a backtracking problem where:

// You have an n x n grid (maze).

// The rat starts at the top-left corner (0,0) and wants to reach the bottom-right corner (n-1, n-1).

// 1 in the grid means path open.

// 0 means blocked path.

// The rat can move in certain directions (most commonly Down, Right, but sometimes also Up, Left).

// You must find a path (or all possible paths) to reach the destination.

// Approach:

// Use recursion to explore each possible move.

// If you reach the destination → store/print the path.

// If a move leads to a dead end → backtrack (undo last move and try another).

// Maintain a visited path to avoid loops.

// Example Maze
// 1 0 0 0
// 1 1 0 1
// 0 1 0 0
// 1 1 1 1

// One valid path: (0,0) → (1,0) → (1,1) → (2,1) → (3,1) → (3,2) → (3,3)

// Q-Practice Question 1 — Find One Path

#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited) {
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && visited[x][y] == 0);
}

bool solveMaze(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited) {
    // If reached destination
    if (x == n-1 && y == n-1) {
        visited[x][y] = 1;
        return true;
    }

    if (isSafe(x, y, n, maze, visited)) {
        visited[x][y] = 1; // mark as visited

        // Move Down
        if (solveMaze(x+1, y, n, maze, visited)) return true;
        // Move Right
        if (solveMaze(x, y+1, n, maze, visited)) return true;

        // Backtrack
        visited[x][y] = 0;
    }
    return false;
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

    if (solveMaze(0, 0, n, maze, visited)) {
        cout << "Path found:\n";
        for (auto row : visited) {
            for (auto cell : row) cout << cell << " ";
            cout << "\n";
        }
    } else {
        cout << "No path found.\n";
    }
    return 0;
}


// Explanation:

// isSafe ensures the rat stays inside maze bounds and only visits open cells.

// solveMaze explores paths recursively, moving down or right.

// Backtracking removes visited marks if path fails.

