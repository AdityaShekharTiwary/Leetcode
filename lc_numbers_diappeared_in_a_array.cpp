class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=nums[i];
            temp=(temp>0) ? temp:-temp;
            if(nums[temp-1]>0)
                nums[temp-1]*=-1;
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0)
                res.push_back(i+1);
        }
        return res;
    }
};
