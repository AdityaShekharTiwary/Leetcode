class Solution {
public:
    bool isPossible(vector<int> position, int mid, int n, int m) {
        int pos = position[0], cnt = 1;
        for (int i = 1; i < n; i++) {
            if (position[i] - pos >= mid) {
                cnt++;
                pos = position[i];
            }
            if (cnt == m) return true;
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int low = 1;
        int high = position[n - 1] - position[0], res = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (isPossible(position, mid, n, m)) {
                res = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return res;
    }
};