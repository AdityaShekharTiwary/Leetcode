class Solution {
public:

    void dfs(vector<vector<int>> board, int i, vector<bool> &vis) {
        vis[i] = true;
        for (int j = 0; j < board.size(); j++) {
            if (!vis[j] && board[i][j] == 1) {
                dfs(board, j, vis);
            }
        }

    }

    int findCircleNum(vector<vector<int>>& board) {
        int n = board.size();
        vector<bool> vis(n, false);

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(board, i, vis);
                cnt++;
            }
        }
        return cnt;
    }
};