#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans, vector<vector<bool>> &vis) {
    int n = mat.size();
    // Boundary conditions and checks for obstacles or already visited cells
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c] == true) {
        return;
    }

    // If destination is reached, add the current path to the answer
    if (r == n - 1 && c == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark the cell as visited
    vis[r][c] = true;

    // Move Down
    helper(mat, r + 1, c, path + "D", ans, vis);
    // Move Up
    helper(mat, r - 1, c, path + "U", ans, vis);
    // Move Left
    helper(mat, r, c - 1, path + "L", ans, vis);
    // Move Right
    helper(mat, r, c + 1, path + "R", ans, vis);

    // Backtrack: Unmark the cell (important for exploring other possible paths)
    vis[r][c] = false;
}

// Function to find all possible paths in the maze
vector<string> findPath(vector<vector<int>> &mat) {
    int n = mat.size();
    vector<string> ans;
    string path = "";
    vector<vector<bool>> vis(n, vector<bool>(n, false));

    // Start from the top-left corner of the matrix
    helper(mat, 0, 0, path, ans, vis);

    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    // Find all paths
    vector<string> ans = findPath(mat);

    // Print all paths
    for (string path : ans) {
        cout << path << endl;
    }

    return 0;
}