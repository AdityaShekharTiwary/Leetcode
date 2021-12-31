class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0;
        int l = 0, r = 2, n = s.size();
        set<char> st;
        while (r < n) {
            for (int i = l; i <= r; i++) {
                st.insert(s[i]);
            }
            if (st.size() == 3) ans++;
            r++;
            l++;
            st.clear();
        }
        return ans;
    }

};