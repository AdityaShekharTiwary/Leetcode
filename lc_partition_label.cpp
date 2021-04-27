class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> res;

        vector<int> last(26, 0);

        for (int i = 0; i < S.size(); i++) {
            last[S[i] - 'a'] = i;
        }

        int j = 0, k = 0;
        for (int i = 0; i < S.size(); i++) {
            j = max(j, last[S[i] - 'a']);
            if (i == j) {
                res.push_back(i - k + 1);
                k = i + 1;
            }
        }
        return res;
    }
};