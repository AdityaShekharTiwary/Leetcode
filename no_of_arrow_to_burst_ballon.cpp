class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<pair<int, int>> hash;
        int n = points.size();
        for (int i = 0; i < n; i++) {
            hash.push_back({points[i][1], points[i][0]});
        }
        sort(hash.begin(), hash.end());
        int curr = hash[0].first;
        int cnt = 1, i = 1;
        while (i < n) {
            if (curr < hash[i].second) {
                cnt++;
                curr = hash[i].first;
            }
            i++;
        }
        return cnt;
    }
};