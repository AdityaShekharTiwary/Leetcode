class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
       int n=nums.size();
        int res=INT_MAX;
        int sum=0;

        int left=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];

            while(sum>=s){
                res=min(res,i+1-left);
                sum-=nums[left];
                left++;
            }
        }
        return res!=INT_MAX ? res:0 ;
    }
};
