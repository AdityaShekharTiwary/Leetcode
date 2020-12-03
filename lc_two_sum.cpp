class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>b;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target){
                    b.push_back(i);
                    b.push_back(j);
                }
            }
        }
         return b;
    }
};
