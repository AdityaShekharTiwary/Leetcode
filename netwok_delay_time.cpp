class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> adj[n + 1];
        for (int i = 0; i < times.size(); i++) {
            adj[times[i][0]].push_back({times[i][1], times[i][2]});
        }

        vector<int> dis(n + 1, 1e5);
        dis[k] = 0;
        queue<pair<int, int>> q;
        q.push(make_pair(0, k));
        while (!q.empty()) {
            int node = q.front().second;
            q.pop();
            for (auto it : adj[node]) {
                int child = it.first, dist = it.second;
                if (dis[child] > dis[node] + dist) {
                    dis[child] = dis[node] + dist;
                    q.push(make_pair(dis[child], child));
                }

            }
        }
        int ans = *max_element(dis.begin() + 1, dis.end());
        return ans == 1e5 ? -1 : ans;
    }
};