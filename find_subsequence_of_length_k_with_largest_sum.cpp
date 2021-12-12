class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> v;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        vector<pair<int, int>> temp;
        for (int i = 0; i < k; i++) {
            temp.push_back({v[i].second, v[i].first});
        }
        sort(temp.begin(), temp.end());
        vector<int> res;
        for (int i = 0; i < k; i++) res.push_back(temp[i].second);
        return res;
    }
};