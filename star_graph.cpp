class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> hash;
        int n = edges.size();
        for (auto it : edges) {
            hash[it[0]]++;
            hash[it[1]]++;
        }
        for (auto it : hash) {
            if (it.second == n) return it.first;
        }
        return -1;
        // return e[0][0] == e[1][0] || e[0][0] == e[1][1] ? e[0][0] : e[0][1];
    }
};