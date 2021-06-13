class Solution {
public:

    void dfs(vector<vector<int>> &adj, vector<bool> &vis, int idx) {
        vis[idx] = true;
        for (int i : adj[idx]) {
            if (!vis[i]) {
                dfs(adj, vis, i);
            }
        }
    }

    int makeConnected(int n, vector<vector<int>>& arr) {
        if (arr.size() < n - 1) return -1;

        vector<vector<int>> adj(n);

        for (auto x : arr) {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<bool> vis(n, false);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(adj, vis, i);
                ans++;
            }
        }
        return ans - 1;
    }
};