class Solution {
public:
    
    int count(int n,int i,int dp[]){
        if(i>n) return 0;
        if(i==n) return 1;
        if(dp[i]>0)return dp[i];
        dp[i] = count(n,i+1,dp)+count(n,i+2,dp);
        return dp[i];
    }
    
    int climbStairs(int n) {
        int dp[n];
        for(int i=0;i<n;i++) dp[i]=0;
        return count(n,0,dp);
    }
};