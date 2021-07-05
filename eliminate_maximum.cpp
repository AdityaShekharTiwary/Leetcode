class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int> time;
        int n = dist.size();
        for (int i = 0; i < n; i++) {
            int t = (int) ceil(1.0 * dist[i] / speed[i]);
            time.push_back(t);
        }
        int cnt = 1;
        sort(time.begin(), time.end());
        for (int i = 2; i <= n; i++) {
            if (time[i - 1] < i) break;
            cnt++;
        }
        return cnt;
    }
};