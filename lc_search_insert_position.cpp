class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int i=1,res=0;
        if(nums[0]>target) return 0;
        if(nums[n-1]<target) return n;
        while(i<n){
            if(nums[i]==target) {
                res=i;
                break;
            }
            else if(nums[i-1]<target && nums[i]>target) {
                res=i;
                break;
            }
            i++;
        }
        return res;
    }
};