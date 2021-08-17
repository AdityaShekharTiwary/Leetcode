class Solution {
public:
    bool ans;
    static const int max = (int)(2 * 1e5 + 2);
    vector<int> adj[max];
    void dfs(int start, int x, vector<bool> &vis) {
        vis[start] = true;
        if (start == x) {
            ans = true;
            return;
        }
        for (auto it : adj[start]) {
            if (!vis[it] & !ans) dfs(it, x, vis);
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {

        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        vector<bool> vis(n + 2, false);
        ans = false;
        int destination = end;
        dfs(start, destination, vis);
        return ans;

    }
};