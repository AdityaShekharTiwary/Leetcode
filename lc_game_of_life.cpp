class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                check(board, i, j, i + 1, j - 1);
                check(board, i, j, i + 1, j + 1);
                check(board, i, j, i + 1, j);
                check(board, i, j, i, j + 1);

                if (board[i][j] >= 5 && board[i][j] <= 7) board[i][j] = 1;
                else board[i][j] = 0;
            }
        }
    }

private:
    void check(vector<vector<int>> &board, int i, int j, int a, int b) {
        int n = board.size();
        int m = board[0].size();

        if (a >= n || b < 0 || b >= m) return;

        if (board[i][j] % 2 != 0) board[a][b] += 2;
        if (board[a][b] % 2 != 0) board[i][j] += 2;
    }
};