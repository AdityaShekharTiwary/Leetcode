class Solution {
public:

//     void helper(vector<int> &nums){
//         int temp=nums[0];
//         for(int i=0;i<nums.size()-1;i++){
//             nums[i]=nums[i+1];
//         }
//         nums[nums.size()-1]=temp;
//     }

//     void leftrotate(vector<int> &nums,int k){
//         if(k>nums.size()) k=k%nums.size();
//         k=nums.size()-k;
//         for(int i=0;i<k;i++){
//             helper(nums);
//         }
//     }

	void rotate(vector<int>& nums, int k) {
		k %= nums.size();
		reverse(nums.begin(), nums.end());
		reverse(nums.begin(), nums.begin() + k);
		reverse(nums.begin() + k, nums.end());
	}
};