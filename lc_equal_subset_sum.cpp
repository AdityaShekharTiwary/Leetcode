class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto i : nums) sum += i;
        if (sum % 2 != 0) return false;

        sum = sum / 2;
        vector<bool> dp(sum + 1, false);
        dp[0] = true;

        for (auto i : nums) {
            for (int j = sum; j >= i; j--) {
                if (dp[j - i]) dp[j] = true;
            }
        }
        return dp[sum];
    }
};