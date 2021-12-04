class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> hash;
        int curr = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            curr += nums[i];
            if (curr == k) cnt++;
            if (hash.find(curr - k) != hash.end()) {
                cnt += hash[curr - k];
            }
            hash[curr]++;
        }
        return cnt;
    }
};