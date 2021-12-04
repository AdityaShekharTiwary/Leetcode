class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> hash;
        hash[0] = -1;
        int curr = 0, res = 0;
        for (int i = 0; i < nums.size(); i++) {
            curr += nums[i] ? 1 : -1;
            if (hash.find(curr) != hash.end()) {
                res = max(res, i - hash[curr]);
            }
            else hash[curr] = i;
        }
        return res;
    }
};