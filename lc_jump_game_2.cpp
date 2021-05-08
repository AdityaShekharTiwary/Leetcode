class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1 || nums[0] == 0) return 0;
        int jumps = 1;

        int curr_end = nums[0];
        int farthest = nums[0];

        for (int i = 1; i < n; i++) {
            if (i == n - 1) return jumps;
            farthest = max(farthest, i + nums[i]);

            if (i == curr_end) {
                jumps++;
                curr_end = farthest;
            }
        }
        return jumps;
    }
};