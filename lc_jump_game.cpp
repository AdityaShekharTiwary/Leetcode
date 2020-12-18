class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
       for(int i=n;i>=0;i--){
           if(i+nums[i]>=n)
               n=i;
       }
            return n==0;
    }
};
