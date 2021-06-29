class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int, int> hash;
        for (int i : nums) hash[i]++;
        for (auto x : hash) {
            if (x.second > 0) {
                int freq = x.second;
                for (int i = 0; i < k; i++) {
                    if (hash[x.first + i] < freq) return false;
                    else hash[x.first + i] -= freq;
                }
            }
        }
        return true;
    }
};