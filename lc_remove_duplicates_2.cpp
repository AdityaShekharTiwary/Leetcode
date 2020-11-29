class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
        if(n <= 2) return n;
        int index = 0;
        nums[index++] = nums[0];
        nums[index++] = nums[1];
        for(int i = 2;i < n; i++) {
            if(nums[i] == nums[index-1] && nums[i] == nums[index-2]) {
                continue;
            }else {
                nums[index++] = nums[i];
            }
        }
        return index;
    }
};
