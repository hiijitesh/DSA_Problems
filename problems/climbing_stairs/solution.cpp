class Solution {
public:
    int totalWays(int n, int currIdx, vector<int> &dp){
        
        if(currIdx == n) return 1;
        
        if(currIdx > n) return 0;
        
        if(dp[currIdx] != -1) return dp[currIdx];
        
        int firstStep = totalWays(n, currIdx+1, dp);
        int secondStep = totalWays(n, currIdx+2, dp);
        
        return dp[currIdx] = firstStep + secondStep;
        
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        
        return totalWays(n,0, dp);
        
    }
};