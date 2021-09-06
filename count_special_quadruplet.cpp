class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int res = 0, n = nums.size();
        unordered_map<int, int> freq;
        reverse(nums.begin(), nums.end());

        freq[nums[0]]++;
        for (int i = 1; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++)
                for (int k = j + 1; k < n; k++)
                    res += freq[nums[i] + nums[j] + nums[k]];
            freq[nums[i]]++;
        }

        return res;
    }
};