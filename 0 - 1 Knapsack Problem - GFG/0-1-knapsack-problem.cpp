// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code heret
       
       vector<vector<int>> dp(n+1 , vector<int> (W+1, -1) ); 
       
       return maxProfit(W, wt, val, n, 0, dp);
    }
    
    private:
    
    int maxProfit( int W, int wt[], int val[], int n, int currentItem, vector<vector<int>> &dp)
    {
        if( W == 0) return 0;
        
        if( currentItem >= n) return 0;
        
        if( dp[currentItem][W] != -1) return dp[currentItem][W];
        
        int pick =0;
        
        if( wt[currentItem] <= W) {
            
            pick = val[currentItem] + maxProfit(W-wt[currentItem], wt, val, n, currentItem+1, dp);
            
        }
        int notPick = maxProfit(W, wt, val, n, currentItem+1, dp);
        
        return dp[currentItem][W] = max( pick, notPick);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends