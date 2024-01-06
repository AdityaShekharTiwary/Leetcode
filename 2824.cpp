class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0, right = n - 1, cnt = 0;
        while (left < right) {
            if (nums[left] + nums[right] < target) {
                cnt += right - left;
                left++;
            }
            else right--;
        }
        return cnt;
    }
};



// int countPairs(vector<int>& nums, int target) {
//         int cnt=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]<target) cnt++;
//             }
//         }
//         return cnt;
//     }