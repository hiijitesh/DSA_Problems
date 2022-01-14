class Solution {
public:
    int myfib( int n,vector<int> &dp){
        
        if( n==0 ) return 0;
        
        if( n==1 ) return 1;
        
        if ( dp[n] != -1) return dp[n];
        
        return dp[n]= myfib(n-1,dp)+ myfib(n-2,dp);
    }
    
    int fib(int n ) {
        
        vector<int> dp(n+1, -1);
        
        return myfib( n,dp);
        
        // recursive solution
//         if ( n==0 ) return 0;
        
//         if( n==1 ) return 1;
        
//         return fib(n-1)+ fib(n-2);
        
    }
};