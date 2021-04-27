class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        map<int, int> look;
        int n = row.size();
        for (int i = 0; i < n; i++) look[row[i]] = i;
        int cnt = 0;
        for (int i = 0; i < n; i += 2) {
            int couple = row[i] ^ 1;
            if (row[i + 1] != couple) {
                cnt++;
                row[look[couple]] = row[i + 1];
                look[row[i + 1]] = look[couple];
            }
        }

        return cnt;
    }
};