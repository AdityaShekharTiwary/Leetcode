class Solution {
public:
	vector<int> countBits(int num) {
		vector<int> res;
		for (int i = 0; i <= num; i++) {
			int cnt = 0;
			cnt = __builtin_popcount(i);
			res.push_back(cnt);
		}
		return res;
	}
};