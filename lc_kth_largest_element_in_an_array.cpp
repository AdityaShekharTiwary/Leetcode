class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1) return nums[0];
        int res=0,count=1;
        sort(nums.begin(),nums.end());
        return nums[n-k];
    }
};
