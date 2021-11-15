class Solution {
public:

    bool bipartiteBFS(vector<vector<int>>& graph, vector<int> &color, int idx) {
        queue<int> q;
        q.push(idx);
        color[idx] = 1;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (auto it : graph[node]) {
                if (color[it] == -1) {
                    color[it] = 1 - color[node];
                    q.push(it);
                }
                else {
                    if (color[it] == color[node]) return false;
                }
            }
        }
        return true;
    }
    

    bool bipartiteDFS(vector<vector<int>>& graph, vector<int> &color, int node) {
        if (color[node] == -1) color[node] = 1;
        for (auto it : graph[node]) {
            if (color[it] == -1) {
                color[it] = 1 - color[node];
                if (!bipartiteDFS(graph, color, it)) return false;
            }
            else if (color[it] == color[node]) return false;
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                // if(!bipartiteBFS(graph,color,i)) return false;
                if (!bipartiteDFS(graph, color, i)) return false;
            }
        }
        return true;
    }
};
