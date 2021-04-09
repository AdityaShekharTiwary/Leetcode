class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        int sum=0;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        for(auto &x:m){
            if(x.second==1) sum+=x.first;
        }
        return sum;
    }
};