class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<(nums.size())/2;i++)
        {
            int freq=nums[2*i];
            int val=nums[2*i+1];
            for(int i=0;i<freq;i++)
            {
                ans.push_back(val);
            }
        }
        return ans;
    }
};
