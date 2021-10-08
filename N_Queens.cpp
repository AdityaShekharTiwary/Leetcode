class Solution {
public:

    vector<vector<string>> res;
    bool IsSafe(vector<string> &chess, int row, int col) {
        for (int i = row, j = col; i >= 0; i--) {
            if (chess[i][j] == 'Q') return false;
        }
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (chess[i][j] == 'Q') return false;
        }
        for (int i = row, j = col; i >= 0 && j < chess.size(); i--, j++) {
            if (chess[i][j] == 'Q') return false;
        }
        return true;
    }

    void solve(vector<string> &chess, int row) {
        if (row == chess.size()) {
            res.push_back(chess);
            return;
        }

        for (int col = 0; col < chess.size(); ++col) {
            if (IsSafe(chess, row, col)) {
                chess[row][col] = 'Q';
                solve(chess, row + 1);
                chess[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> chess(n, string(n, '.'));
        solve(chess, 0);
        return res;
    }

};