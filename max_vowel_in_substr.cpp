class Solution {
public:
    int maxVowels(string s, int k) {
        int l = 0, ans = 0, cnt = 0;

        for (int r = 0; r < s.size(); r++) {
            if (s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u') cnt++;
            if (k == 0) {
                if (s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u') cnt--;
                l++;
                k++;
                ans = max(ans, cnt);
            }
            k--;
            ans = max(ans, cnt);
        }
        return ans;
    }
};