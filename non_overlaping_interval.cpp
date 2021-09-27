class Solution {
public:

    static bool comp(pair<int, int> &a, pair<int, int>&b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }
    int eraseOverlapIntervals(vector<vector<int>>& points) {
        vector<pair<int, int>> hash;
        int n = points.size();
        for (int i = 0; i < n; i++) {
            hash.push_back({points[i][1], points[i][0]});
        }
        sort(hash.begin(), hash.end(), comp);
        for (auto it : hash) cout << it.first << " " << it.second << endl;
        int curr = hash[0].first;
        int cnt = 0, i = 1;
        while (i < n) {
            // cout<<curr<<" "<<hash[i].second<<" "<<cnt<<endl;
            if (curr > hash[i].second) {
                cnt++;
            }
            else curr = hash[i].first;
            i++;
        }
        return cnt;
    }
};