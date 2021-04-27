class Solution {
public:

    static bool comp(vector<int> &a, vector<int> &b) {
        if (a[0] == b[0]) return b[1] > a[1];
        else return b[0] > a[0];
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {

        int n = people.size();
        sort(people.begin(), people.end(), comp);

        vector<vector<int>> res(n, vector<int>(2, -1) );

        for (int i = 0; i < n; i++) {
            int cnt = people[i][1];
            for (int j = 0; j < n; j++) {
                if (res[j][0] == -1 && cnt == 0) {
                    res[j][0] = people[i][0];
                    res[j][1] = people[i][1];
                    break;
                }
                else if (res[j][0] == -1 || res[j][0] >= people[i][0]) {
                    cnt--;
                }
            }
        }

        return res;
    }
};