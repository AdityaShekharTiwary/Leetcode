class Solution {
public:

    void dfs(int idx, vector<vector<int>>& rooms, vector<bool> &vis) {
        vis[idx] = true;
        for (auto it : rooms[idx]) {
            if (!vis[it]) {
                dfs(it, rooms, vis);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n, false);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, rooms, vis);
                cnt++;
            }
        }
        if (cnt > 1) return false;
        return true;
    }
};