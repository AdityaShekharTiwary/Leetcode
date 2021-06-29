class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> refund;
        int n = costs.size() / 2;
        int total_cost = 0;
        for (int i = 0; i < costs.size(); i++) {
            refund.push_back(costs[i][1] - costs[i][0]);
            total_cost += costs[i][0];
        }
        sort(refund.begin(), refund.end());

        for (int i = 0; i < n; i++) {
            total_cost += refund[i];
        }

        return total_cost;
    }
};