class Solution {
public:

    void dfs(vector<vector<int>> &land, int i, int j, int m, int n, int &end_row, int &end_col) {
        if (i < 0 || i >= m || j < 0 || j >= n || land[i][j] == 0) return;
        land[i][j] = 0;

        end_row = max(i, end_row);
        end_col = max(j, end_col);

        dfs(land, i + 1, j, m, n, end_row, end_col);
        dfs(land, i, j + 1, m, n, end_row, end_col);
        dfs(land, i - 1, j, m, n, end_row, end_col);
        dfs(land, i, j - 1, m, n, end_row, end_col);
    }

    vector<vector<int>> findFarmland(vector<vector<int>> &land) {
        int m = land.size();
        int n = land[0].size();
        vector<vector<int>> ans;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                vector<int> pos;
                int end_row = i, end_col = j;
                if (land[i][j] != 0) {
                    pos.push_back(i);
                    pos.push_back(j);
                    cout << i << " " << j << endl;
                    dfs(land, i, j, m, n, end_row, end_col);
                    pos.push_back(end_row);
                    pos.push_back(end_col);
                    ans.push_back(pos);
                    pos.clear();
                }
            }
        }
        return ans;
    }
};