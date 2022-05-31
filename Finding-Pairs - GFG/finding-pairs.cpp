// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	

int count_pairs(vector<char> &arr, string &s,int n,int m){
    // Complete the function
    int count = 0;
    for(int i=0;i<n;i+=2){
        if(s.find(arr[i]) != string::npos && s.find(arr[i+1]) != string::npos) count++;
    }
    return count;
}
};

// { Driver Code Starts.

int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        vector<char> arr;
        
        for(int i=0;i<2*n;i+=2){
            char x,y;cin>>x>>y;
            arr.push_back(x);
            arr.push_back(y);
        }
        
        string s;cin>>s;
        Solution ob;
        cout<<ob.count_pairs(arr,s,2*n,m)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends