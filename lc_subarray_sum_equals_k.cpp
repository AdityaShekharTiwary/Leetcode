class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int csum = 0;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            csum += nums[i];
            if(csum == k) ans++;
            if(m.find(csum-k) != m.end()) {
                ans+=m[csum-k];
            }
            m[csum]++;
        }

        return ans;
    }
};
