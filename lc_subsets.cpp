class Solution {
public:

    void solve(vector<vector<int>> &res, vector<int> &temp, int idx, vector<int> nums) {
        if (idx == nums.size()) {
            res.push_back(temp);
            return;
        }

        // For each number we have two choices either pick it or drop it
        temp.push_back(nums[idx]); // going with pick
        solve(res, temp, idx + 1, nums);
        temp.pop_back(); // going with drop
        solve(res, temp, idx + 1, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        solve(res, temp, 0, nums);
        return res;
    }
};