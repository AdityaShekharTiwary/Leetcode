class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(res, "", n, n);
        return res;
    }

    void backtrack(vector<string> &res, string curr, int open, int close) {
        if (open == 0 && close == 0) {
            res.push_back(curr);
            return;
        }

        if (open > 0) backtrack(res, curr + "(", open - 1, close );
        if (close > open) backtrack(res, curr + ")", open, close - 1);



    }
};