class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int n = matrix.size(), m = matrix[0].size();

        int l = 0, r = m * n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int key = matrix[mid / m][mid % m];
            if (key == target) return true;
            else if (key < target) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};