class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 0), suffix(n, 0);
        for (int i = 1; i < n; i++) {
            prefix[i] = nums[i - 1] + prefix[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = nums[i + 1] + suffix[i + 1];
        }
        // for(auto it:prefix) cout<<it<<" ";
        // cout<<endl;
        // for(auto it:suffix) cout<<it<<" ";
        // cout<<endl;
        vector<int> res(n, 0);
        for (int i = 0; i < n; i++) res[i] = abs(prefix[i] - suffix[i]);
        return res;
    }
};