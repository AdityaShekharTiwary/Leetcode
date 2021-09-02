class Solution {
public:

    bool cycle;

    void dfsTopo(vector<int> adj[], vector<bool> &vis, vector<bool> &dfsVis, vector<int> & res, int node) {

        if (cycle) return;
        vis[node] = true;
        dfsVis[node] = true;
        for (auto it : adj[node]) {
            if (dfsVis[it]) cycle = true;
            if (!vis[it]) {
                dfsTopo(adj, vis, dfsVis, res, it);
            }
        }
        res.push_back(node);
        dfsVis[node] = false;
    }

    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {

        vector<int> adj[n];
        for (auto edge : prerequisites) {
            adj[edge[1]].push_back(edge[0]);
        }
        cycle = false;
        vector<int> topo;
        vector<bool> vis(n, false), dfsVis(n, false);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfsTopo(adj, vis, dfsVis, topo, i);
            }
        }
        if (cycle) return {};
        reverse(topo.begin(), topo.end());
        return topo;
    }
};