class Solution {
public:
    
    int solve(int n, vector<int> &dp){
        
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        if(dp[n] != -1) return dp[n];
        if(dp[n-1] != -1) return dp[n-1];
        
        int fib1 = solve(n-1, dp);
            
        int fib2 = solve(n-2, dp);
        
        return dp[n] = fib1 + fib2;
    }
    int fib(int n) {
        
       vector<int> dp(n+1, -1);
        
        return solve(n, dp);
        
    }
};