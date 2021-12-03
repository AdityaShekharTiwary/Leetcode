class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int max_sum = INT_MIN;
        for (int i = 0; i < n / 2; i++) {
            max_sum = max(max_sum, nums[i] + nums[n - 1 - i]);
        }
        return max_sum;
    }
};