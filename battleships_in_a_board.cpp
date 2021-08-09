class Solution {
public:

    void dfs(vector<vector<char>> board, int n, int m, int i, int j, vector<vector<bool>> &vis) {
        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] == '.') return;

        vis[i][j] = true;
        dfs(board, n, m, i + 1, j, vis);
        dfs(board, n, m, i, j + 1, vis);
    }

    int countBattleships(vector<vector<char>>& board) {

        int n = board.size(), m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'X' && !vis[i][j]) {
                    dfs(board, n, m, i, j, vis);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
