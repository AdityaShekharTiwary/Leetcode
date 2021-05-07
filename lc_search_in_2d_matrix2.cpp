class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int r = 0, c = matrix[0].size() - 1;
		while (r < matrix.size() && c >= 0) {
			if (matrix[c][r] == target) return true;
			matrix[c][r] < target ? r++ : c--;
		}
		return false;
	}
};