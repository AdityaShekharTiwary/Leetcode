
// BFS
class Solution {
public:

    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {

        vector<int> adj[n];
        for (auto it : prerequisites) {
            adj[it[0]].push_back(it[1]);
        }
        vector<vector<bool>> isReachable(n, vector<bool>(n, false));
        vector<vector<bool>> vis(n, vector<bool>(n, false));

        queue<int> q;
        for (int i = 0; i < n; i++) {
            q.push(i);
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                for (auto it : adj[node]) {
                    if (!vis[i][it]) {
                        isReachable[i][it] = true;
                        q.push(it);
                        vis[i][it] = true;
                    }
                }
            }
        }

        vector<bool> ans;
        for (auto it : queries) {
            ans.push_back(isReachable[it[0]][it[1]]);
        }
        return ans;
    }
};

// DFS

class Solution {
public:


    bool dfs(int source, int destination, vector<bool> &vis, vector<int> adj[]) {
        if (source == destination) return true;
        if (vis[source]) return false;

        vis[source] = true;
        for (auto it : adj[source]) {
            if (!vis[it]) {
                if (dfs(it, destination, vis, adj)) return true;
            }
        }
        return false;
    }

    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {

        vector<int> adj[n];
        for (auto it : prerequisites) {
            adj[it[0]].push_back(it[1]);
        }

        vector<bool> res;
        for (auto it : queries) {
            vector<bool> vis(n, false);
            res.push_back(dfs(it[0], it[1], vis, adj));
        }
        return res;
    }
};