class Solution {
public:
    int uniqueBST(int n,vector<int> &dp){
        if( n<=1) return 1;
        
        if( dp[n] != -1) return dp[n];
        
        int ans=0;
        for(int i=0; i<n; i++){
            
            ans+= uniqueBST(i,dp)*uniqueBST(n-i-1,dp);
        }
        return dp[n]=ans;
    }
    int numTrees(int n) {
        vector<int> dp(1001,-1);
        return uniqueBST(n,dp);
        
    }
};

// class Solution
// {
//     public:
    
//     cpp_int nthCatlan(int n,vector<cpp_int> &dp){
//         if( n<=1) return 1;
        
//         if( dp[n] != -1) return dp[n];
        
//         cpp_int ans=0;
//         for(int i=0; i<n; i++){
            
//             ans+= nthCatlan(i,dp)*nthCatlan(n-i-1,dp);
//         }
//         return dp[n]=ans;
//     }
//     //Function to find the nth catalan number.
//     cpp_int findCatalan(int n) 
//     {
//         vector<cpp_int> dp(1001,-1);
//         return nthCatlan(n,dp);
//     }
// };