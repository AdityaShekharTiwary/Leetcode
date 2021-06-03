class Solution {
public:

    vector<vector<int>> paths;
    vector<int> path;


    void dfs(vector<vector<int>> graph, int curr) {
        path.push_back(curr);
        if (curr == graph.size() - 1) paths.push_back(path);
        else {
            for (auto it : graph[curr]) dfs(graph, it);
        }
        path.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        dfs(graph, 0);
        return paths;
    }
};