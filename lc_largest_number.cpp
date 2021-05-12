class Solution {
public:

	struct comp {
		bool operator() (int a, int b) {
			string comb1 = to_string(a) + to_string(b);
			string comb2 = to_string(b) + to_string(a);
			return comb1 > comb2;
		}
	} comp;

	string largestNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end(), comp);
		if (nums[0] == 0) return "0";
		string res = "";
		for (auto i : nums) {
			res += to_string(i);
		}
		return res;
	}
};