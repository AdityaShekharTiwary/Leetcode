class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int i = 0;
        for (auto it : encoded) {
            int curr = it ^ ans[i++];
            ans.push_back(curr);
        }
        return ans;
    }
};