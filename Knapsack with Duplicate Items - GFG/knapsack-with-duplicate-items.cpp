// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
       vector<vector<int>> dp(1002, vector<int>(1002, -1));
      return maxProfit(N, W, val, wt, 0, dp);
      

    }
private:
    
    int maxProfit(int N, int W, int val[], int wt[], int currIndex, vector<vector<int>> &dp)
    {
        if(currIndex >= N) return 0;
        if(W == 0) return 0;
        
        if(dp[W][currIndex] != -1) return dp[W][currIndex];
        
        int pick = 0;
        if( wt[currIndex] <= W){
            
        pick = val[currIndex] + maxProfit(N, W-wt[currIndex], val, wt, currIndex, dp);
        }
        int notpick = maxProfit(N, W, val, wt, currIndex + 1, dp);
    
        dp[W][currIndex] = max(pick, notpick);
         return dp[W][currIndex];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends