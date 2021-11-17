class Solution {
public:

    static bool comp(vector<int> a, vector<int> b) {
        return (a[1] > b[1]);
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comp);
        int cnt = 0;
        for (auto it : boxTypes) {
            if (it[0] <= truckSize) {
                cnt += it[0] * it[1];
                truckSize -= it[0];
            }
            else {
                cnt += truckSize * it[1];
                break;
            }
        }
        return cnt;
    }
};