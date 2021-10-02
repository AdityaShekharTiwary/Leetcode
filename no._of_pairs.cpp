class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int cnt = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    if (nums[i] + nums[j] == target) cnt++;
                }
            }
        }
        return cnt;
    }
};