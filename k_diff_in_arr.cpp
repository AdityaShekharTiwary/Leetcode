class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        int cnt = 0;
        unordered_map<int, int> m;
        for (int n : nums) m[n]++;
        for (auto x : m) {
            if ((!k && x.second > 1) || (k && m.count(x.first + k))) cnt++;
        }
        return cnt;
    }
};