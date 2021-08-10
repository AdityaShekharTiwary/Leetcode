class Solution {
public:

    void dfs(vector<vector<int>> &grid, int i, int j, int &cnt) {
        if (grid[i][j] == 1) {
            cnt++;
            grid[i][j] = 0;
            for (int r = 0; r < grid.size(); r++) {
                if (grid[r][j] == 1) dfs(grid, r, j, cnt);
            }
            for (int c = 0; c < grid[0].size(); c++) {
                if (grid[i][c] == 1) dfs(grid, i, c, cnt);
            }
        }

    }

    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    int cnt = 0;
                    dfs(grid, i, j, cnt);
                    if (cnt > 1) ans += cnt;
                }
            }
        }
        return ans;
    }
};