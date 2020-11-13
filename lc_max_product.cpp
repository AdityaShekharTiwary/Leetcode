class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int pro=1;
        int n=nums.size();
        pro=nums[n-1]*nums[n-2]*nums[n-3];
        pro=max(pro,nums[n-1]*nums[0]*nums[1]);
        return pro;
    }
};
