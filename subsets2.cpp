class Solution {
public:

    vector<vector<int>> res;
    vector<int> temp;

    void backtrack(vector<int> nums, int start, int cnt) {
        //if(cnt==nums.size()){
        res.push_back(temp);
        //     return;
        // }

        for (int i = start; i < nums.size(); i++) {
            if (i == start || nums[i] != nums[i - 1]) {
                temp.push_back(nums[i]);
                backtrack(nums, i + 1, cnt + 1);
                temp.pop_back();
            }
            //backtrack(nums,i+1,cnt+1);
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backtrack(nums, 0, 0);
        return res;
    }
};