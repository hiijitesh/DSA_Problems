// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        vector<vector<int>> dp(arr.size()+1, vector<int>(sum+1, -1));
        return totalSubset(arr, sum, 0, dp);
    }
private:
   int totalSubset(vector<int> arr, int sum, int currIndex,  vector<vector<int>> &dp)
   {
       if(currIndex >= arr.size() && sum == 0) return 1;
       if(currIndex >= arr.size() && sum != 0) return 0;
       
       if(dp[currIndex][sum] != -1) return dp[currIndex][sum];
       int consider = 0;
       if( arr[currIndex] <= sum){
           consider = totalSubset(arr, sum-arr[currIndex], currIndex+1, dp);
       }
       
       int notconsider = totalSubset(arr, sum, currIndex+1, dp);
       return dp[currIndex][sum] = max(consider, notconsider);
   }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends