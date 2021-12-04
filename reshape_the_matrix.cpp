class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();
        if (r * c != n * m) return mat;
        vector<vector<int>> res(r, vector<int> (c, 0));
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) temp.push_back(mat[i][j]);
        }
        // for(auto it:temp) cout<<it<<" ";
        int x = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                res[i][j] = temp[j % c + x];
            }
            x += c;
        }
        return res;
    }
};