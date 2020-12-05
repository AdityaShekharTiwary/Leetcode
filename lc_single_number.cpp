class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int hash[60002]={0};
        int ans=0;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]+30000]++;
        }

        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]+30000]==1){
                ans=nums[i];
            }
        }
        return ans;
    }
};
