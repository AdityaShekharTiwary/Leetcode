class Solution {
public:
    int getMaxLen(vector<int>& nums) {
       int window=-1,firstneg=-2,neg=0,len=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                window=i;
                firstneg=-2;
                neg=0;
            }
            else
            {
                if(nums[i]<0) neg++;
                if(neg==1 && firstneg==-2) firstneg=i;
                if(neg%2==0) len=max(len,i-window);
                else len=max(len,i-firstneg);
            }
        }
        return len;
    }
};
