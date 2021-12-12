class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            long long mx = nums[i], mn = nums[i];
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] > mx) {
                    mx = nums[j];
                }
                else if (nums[j] < mn)
                    mn = nums[j];
                ans += mx - mn;
            }
        }
        return ans;
    }
};