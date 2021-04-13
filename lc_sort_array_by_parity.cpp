class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        int t=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) {
                res[t]=nums[i];
                t+=2;
            }
        }
        t=1; 
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0) {
                res[t]=nums[i];
                t+=2;
            }
        }
        
        return res;
        
    }
};