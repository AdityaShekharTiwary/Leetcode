class Solution {
public:

    int cntSetBit(int n) {
        int cnt = 0;
        while (n) {
            if (n % 2) cnt++;
            n /= 2;
        }
        return cnt;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int setBit = cntSetBit(i);
            if (setBit == k) ans += nums[i];
        }
        return ans;
    }
};