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




// class Solution {
// public:
    
//     //Space optimization
    
//       int myfib( int n){
        
//           int prev2 = 0;
//           int prev1 = 1;
        
//           for( int i=2; i<=n; i++ ){
              
//               int currIndex = prev1 + prev2;
              
              
//               prev1 = currIndex;
//               prev2= prev1;
              
//           }
          
//           return prev1;
              
//     }
    
// //     // Tabulation
// //       int myfib( int n,vector<int> &dp){
        
// //           dp[0] = 0;
// //           dp[1] = 1;
        
// //           for( int i=2; i<=n; i++ ){
              
// //               dp[i] = dp[i-1] + dp[i-2];
// //           }
          
// //           return dp[n];
              
// //     }
    
    
//     // memoization solution using 1D array
    
// //     int myfib( int n,vector<int> &dp){
    
//      //   if ( n<=1 ) return n;
                
// //         if ( dp[n] != -1) return dp[n];
        
// //         return dp[n]= myfib(n-1,dp)+ myfib(n-2,dp);
// //     }
    
//     int fib(int n ) {
        
//         // vector<int> dp(n+1, -1);
        
//         return myfib( n);
        
//         // recursive solution
// //         if ( n<=1 ) return n;
                
// //         return fib(n-1)+ fib(n-2);
        
//     }
// };
