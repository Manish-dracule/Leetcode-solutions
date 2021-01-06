class Solution {
public:
    int dp[50]={0};
    int climbStairs(int n) {
         dp[1]=1,dp[2]=2;
        if(dp[n])return dp[n];
        return dp[n]=(climbStairs(n-1)+climbStairs(n-2));
    }
};
