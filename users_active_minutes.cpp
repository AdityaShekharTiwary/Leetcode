class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int, set<int>> hash;
        for (auto it : logs) {
            hash[it[0]].insert(it[1]);
        }
        vector<int> res(k, 0);
        for (auto it : hash) {
            res[it.second.size() - 1]++;
        }
        return res;

    }
};