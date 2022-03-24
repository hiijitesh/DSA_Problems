// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        vector<int> dp(n+1, -1);
        // your code here
        int ans = totalWays(n, dp);
        
        return ans % 1000000007;
        
    }
    private:
    long long totalWays(int n, vector<int> &dp){
        
        if( n == 0 ) return 1;
        if( n <= 0 ) return 0;
        if(dp[n] != -1) return dp[n];
        
        long long oneJump = totalWays(n-1, dp);
        long long twoJump = totalWays(n-2, dp);
        long long threeJump = totalWays(n-3, dp);
        
        return dp[n] = (oneJump + twoJump + threeJump) % 1000000007;
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends