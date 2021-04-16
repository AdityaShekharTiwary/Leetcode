class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int max_ele=-1,res=0,cnt=0;
        for(int i=0;i<n;i++){
           if(nums[i]>max_ele){
               max_ele=nums[i];
               res=i;
           }
        }
        for(int i=0;i<n;i++){
            if(max_ele>=nums[i]*2) cnt++;
        }
        if(cnt<n-1) return -1;
        else return res;
    }
};