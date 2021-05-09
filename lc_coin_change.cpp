class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;

        for (auto i : coins) {
            for (int j = i; j <= amount; j++) {
                dp[j] = min(dp[j], dp[j - i] + 1);
            }
        }
        return dp[amount] <= amount ? dp[amount] : -1;
    }
};