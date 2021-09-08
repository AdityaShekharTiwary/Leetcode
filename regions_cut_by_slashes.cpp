class Solution {
public:
    int x[4] = { -1, 0, 0, 1};
    int y[4] = {0, -1, 1, 0};

    bool isValid(int i, int j, int m, int n, vector<vector<int>>& grid) {
        if (i >= 0 and i < m and j >= 0 and j < n and grid[i][j] == 0)
            return true;
        return false;
    }

    void dfs(int i, int j, int m, int n, vector<vector<bool>>& visited, vector<vector<int>>& grid) {
        visited[i][j] = true;
        for (int k = 0; k < 4; k++) {
            if (isValid(i + x[k], j + y[k], m, n, grid)) {
                if (!visited[i + x[k]][j + y[k]]) {
                    dfs(i + x[k], j + y[k], m, n, visited, grid);
                }
            }
        }
    }

    int ff(vector<string>& grid) {
        // Step 1. Uplevel the grid
        if (!grid.size()) return 0;
        int m = grid.size() * 3;
        int n = grid[0].size() * 3;
        vector<vector<int>> newGrid(m, vector<int>(n, 0));
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        // Step 2. Fill in the new grid
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '/') {
                    newGrid[i * 3][j * 3 + 2] = 1;
                    newGrid[i * 3 + 1][j * 3 + 1] = 1;
                    newGrid[i * 3 + 2][j * 3] = 1;
                }
                else if (grid[i][j] == '\\') {
                    newGrid[i * 3][j * 3] = 1;
                    newGrid[i * 3 + 1][j * 3 + 1] = 1;
                    newGrid[i * 3 + 2][j * 3 + 2] = 1;
                }
            }
        }
        // Step 3. Apply DFS from every single cell
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (newGrid[i][j] == 0 and !visited[i][j]) {
                    dfs(i, j, m, n, visited, newGrid);
                    count++;
                }
            }
        }
        // Step 4. Return count
        return count;
    }

    int regionsBySlashes(vector<string>& grid) {
        return ff(grid);
    }
};
