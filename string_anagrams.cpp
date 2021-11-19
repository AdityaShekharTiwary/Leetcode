class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> hash;
        for (auto c : s) hash[c]++;
        for (auto c : t) hash[c]--;
        int cnt = 0;
        for (auto it : hash) {
            if (it.second >= 0) cnt += it.second;
        }
        return cnt;
    }
};