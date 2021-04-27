class Solution {
public:

    void recurpermute(vector<int> &ds, vector<vector<int>> &res, vector<int> &nums, int freq[]) {
        if (ds.size() == nums.size()) {
            res.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (freq[i] == 0) {
                ds.push_back(nums[i]);
                freq[i] = 1;
                recurpermute(ds, res, nums, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ds;
        int freq[nums.size()];
        for (int i = 0; i < nums.size(); i++) freq[i] = 0;
        recurpermute(ds, res, nums, freq);
        return res;
    }
};