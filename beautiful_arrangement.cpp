class Solution {
public:

    int count = 0;

    void dfs(int n, int idx, vector<bool> &vis) {
        if (idx > n) count++;

        for (int i = 1; i <= n; i++) {
            if (!vis[i] && (i % idx == 0 || idx % i == 0)) {
                vis[i] = true;
                dfs(n, idx + 1, vis);
                vis[i] = false;
            }
        }
    }

    int countArrangement(int n) {
        vector<bool> vis(n + 1, false);
        dfs(n, 1, vis);
        return count;
    }
};