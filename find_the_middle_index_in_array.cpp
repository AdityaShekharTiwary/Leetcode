class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> prefix, suffix;
        int n = nums.size();
        int curr_sum = 0;
        for (int i = 0; i < n; i++) {
            curr_sum += nums[i];
            prefix.push_back(curr_sum);
        }
        curr_sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            curr_sum += nums[i];
            suffix.push_back(curr_sum);
        }
        reverse(suffix.begin(), suffix.end());
        for (int i = 0; i < n; i++) {
            if (prefix[i] == suffix[i]) return i;
        }
        return -1;
    }
};