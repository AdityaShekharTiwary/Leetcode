class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<int> left(n, 0), right(n, 0), prefix(n, 0);
        int x = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '|') {
                x = i;
            }
            left[i] = x;
        }
        x = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '|') {
                x = i;
            }
            right[i] = x;
        }
        // for(auto it:left) cout<<it<<" ";
        // cout<<endl;
        // for(auto it:right) cout<<it<<" ";
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '*') cnt++;
            prefix[i] = cnt;
        }
        vector<int> res;
        // cout<<endl;
        // for(auto it:prefix) cout<<it<<" ";
        for (auto it : queries) {
            int l = right[it[0]];
            int r = left[it[1]];
            if (l == -1 || r == -1) res.push_back(0);
            else if (l > it[1] && r < it[0]) res.push_back(0);
            else res.push_back(prefix[r] - prefix[l]);
        }
        return res;
    }
};