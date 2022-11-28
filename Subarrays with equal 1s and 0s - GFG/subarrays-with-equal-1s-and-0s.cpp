//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        
        
        unordered_map<int , int> mp;
        
        int prefix = 0;
        int ans = 0;
        
        mp[prefix] = 1;
        
        for(int i = 0; i <n; i++)
        {
            int currVal = arr[i];
            
            if(currVal == 0)
                prefix += -1;
            else
                prefix += 1;
            
            if(mp.find(prefix) != mp.end())
            {
                
                ans += mp[prefix];
                mp[prefix]++;
            }
            else
                mp[prefix] = 1;
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
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends