class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int size = rolls.size(), sum = accumulate(rolls.begin(), rolls.end(), 0), newsum = 0;
        newsum = mean * (n + size) - sum;
        if (newsum < n || newsum > 6 * n) return {};
        int mod = newsum % n;
        vector<int>ans(n, newsum / n);
        for (int i = 0; i < mod; i++)
            ans[i] += 1;
        return ans;
    }
};