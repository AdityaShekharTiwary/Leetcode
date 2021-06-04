class Solution {
public:

    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {

        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());

        int n = horizontalCuts.size();
        int m = verticalCuts.size();

        int hor = horizontalCuts[0] - 0, ver = verticalCuts[0] - 0;

        for (int i = 0; i < n - 1; i++) {
            hor = max(hor, horizontalCuts[i + 1] - horizontalCuts[i]);
        }

        for (int i = 0; i < m - 1; i++) {
            ver = max(ver, verticalCuts[i + 1] - verticalCuts[i]);
        }

        hor = max(hor, h - horizontalCuts[n - 1]);
        ver = max(ver, w - verticalCuts[m - 1]);

        int ans = (long long) hor % 1000000007 * (long long) ver % 1000000007;
        return ans;
    }
};