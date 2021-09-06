class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b) {
        if (a[0] == b[0]) return a[1] > b[1];
        return b[0] > a[0];
    }

    int numberOfWeakCharacters(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end(), comp);
        int max_till_now = INT_MIN, cnt = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i][1] < max_till_now) cnt++;
            max_till_now = max(max_till_now, arr[i][1]);
        }
        return cnt;
    }
};