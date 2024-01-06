class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for (auto it : sentences) {
            int cnt = 0;
            for (auto x : it) {
                if (x == ' ') cnt++;
            }
            ans = max(ans, cnt + 1);
        }
        return ans;
    }
};