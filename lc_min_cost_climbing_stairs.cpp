class Solution {
public:
    
    int dp[1001];
    int solve(vector<int> cost,int i){
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int opt1=solve(cost,i+1);
        int opt2=solve(cost,i+2);
        return dp[i]=min(opt1,opt2)+cost[i];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof dp);
        return min(solve(cost,0),solve(cost,1));
    }
    
};