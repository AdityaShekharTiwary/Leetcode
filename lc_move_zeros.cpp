class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0){
            swap(nums[len],nums[i]);
            len++;
            }
        }

    }
};
