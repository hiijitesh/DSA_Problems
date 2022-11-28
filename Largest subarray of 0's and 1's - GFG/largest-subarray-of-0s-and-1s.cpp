//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int n)
    {
        // Your code here
        
        unordered_map<int, int> mp;
        int len = 0;
        int prefixSum = 0;
        mp[prefixSum] = -1;
        
        for(int i = 0; i <n; i++)
        {
            int currVal = arr[i];
            
            if(currVal == 0)
                prefixSum +=-1;
            else
                prefixSum+=1;
    
            if(mp.find(prefixSum) == mp.end())
                mp[prefixSum] = i;
                
            else
            {
                int temp = i - mp[prefixSum];
                len = max(len, temp);
             }
        }
        
        return len;
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends