class Solution {
public:

    bool dfs(vector<vector<int>> &grid, int i, int j, int n, int m) {

        if (i < 0 || j < 0 || i >= n || j >= m) return false;

        if (grid[i][j] == 1) return true;
        grid[i][j] = 1;

        bool d1 = dfs(grid, i + 1, j, n, m);
        bool d2 = dfs(grid, i - 1, j, n, m);
        bool d3 = dfs(grid, i, j - 1, n, m);
        bool d4 = dfs(grid, i, j + 1, n, m);

        return d1 && d2 && d3 && d4;

    }

    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    if (dfs(grid, i, j, n, m))
                        cnt++;

                }
            }
        }
        return cnt;
    }
};