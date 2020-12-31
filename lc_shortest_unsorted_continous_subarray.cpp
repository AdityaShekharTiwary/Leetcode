class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start=0,end=0;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]);
        }
        sort(res.begin(),res.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=res[i]){
                start=i;
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=res[i]){
                end=i;
            }
        }
        if(end==0) return end-start;
        else return end-start+1;
    }
};
