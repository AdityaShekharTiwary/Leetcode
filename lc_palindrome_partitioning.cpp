class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> temp;
        partition(0, s, res, temp);
        return res;
    }

    void partition(int idx, string s, vector<vector<string>> &res, vector<string> &temp) {

        if (idx == s.size()) {
            res.push_back(temp);
            return;
        }

        for (int i = idx; i < s.size(); ++i) {
            if (isPal(s, idx, i)) {
                temp.push_back(s.substr(idx, i - idx + 1));
                partition(i + 1, s, res, temp);
                temp.pop_back();
            }
        }
    }


    bool isPal(string s, int start, int end) {
        while (start <= end) {
            if (s[start++] != s[end--]) return false;
        }
        return true;
    }
};