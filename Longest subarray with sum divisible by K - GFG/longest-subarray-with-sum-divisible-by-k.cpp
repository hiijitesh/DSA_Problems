//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int nums[], int n, int k)
	{
	    int ans = 0;
        unordered_map<int, int> mp;
        
        int prefixSum = 0;
        
        mp[prefixSum] = -1;
        
        for(int i = 0; i < n; i++)
        {
            prefixSum += nums[i];
            
            prefixSum = ((prefixSum % k) + k ) % k;
            
            if(mp.find(prefixSum) != mp.end())
            {
                int prevIdx = mp[prefixSum];
                ans = max(ans, i - prevIdx);
            }
            else
                mp[prefixSum] = i;
        }
        
        return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends