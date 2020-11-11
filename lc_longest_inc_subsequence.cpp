class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int n=nums.size();
        int count=0,maxi=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1]){
                count++;
                maxi=max(count,maxi);
            }
            else
                count=0;
        }
        return maxi+1;
    }
};
