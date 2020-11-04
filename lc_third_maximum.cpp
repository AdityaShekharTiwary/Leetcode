class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       nums.erase(unique(nums.begin(),nums.end()),nums.end());
       int siz=nums.size();
       if(siz<3) return nums[siz-1];
       return nums[siz-3];
    }
};




