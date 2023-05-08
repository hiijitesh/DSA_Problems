class Solution {
public:
    int totalWays(int n , int currStair, vector<int> &dp)
    {
        if(currStair == n)
            return 1;
        if(currStair > n) 
            return 0;
        
        if(dp[currStair] != -1)
            return dp[currStair];
            
        int one = totalWays(n, currStair+1, dp);
        int two = totalWays(n, currStair+2, dp);
        
        return dp[currStair] = one + two;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        
        return totalWays(n, 0, dp);
        
    }
};