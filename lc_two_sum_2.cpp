class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int l=0;
        int r=numbers.size()-1;
        while(r>l){
            if(numbers[l]+numbers[r]==target){
                vector<int>res{l+1,r+1};
                return res;
            }
            else if(numbers[l]+numbers[r]>target) r--;
            else l++;
        }
        return {};
    }
};
