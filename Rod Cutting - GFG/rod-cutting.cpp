// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
        
        return maxRod(price, n, 0, dp);
    }
  private:
  
  int maxRod( int price[], int n, int currIndex,  vector<vector<int>> &dp){
      
      if(n == 0) return 0;
      if(currIndex >= n ) return 0;
      
      if(dp[currIndex][n] != -1) return dp[currIndex][n];
      int consider = 0;
      if( currIndex + 1 <= n){
          consider = price[currIndex] + maxRod(price, n-(currIndex+1), currIndex, dp);
      
      }
      int notConsider = maxRod( price, n, currIndex + 1, dp);
      
      return dp[currIndex][n] = max(consider, notConsider);
  }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends