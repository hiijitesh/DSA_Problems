//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    long long getSubstringWithEqual012(string str) 
    {

        
        int ans = 0;
        unordered_map<string, int> mp;
        
        int countZeros = 0;
        int countOnes = 0;
        int countTwos = 0;
        
        string key = to_string(countOnes - countZeros) + "#" + to_string(countTwos - countOnes );
        
        mp[key] = 1;
        
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '0')
                countZeros += 1;
                
            else if(str[i] == '1')
                countOnes += 1;
                
            else
                countTwos += 1;
                
            string currKey = to_string(countOnes - countZeros) + "#" + to_string(countTwos - countOnes );
            
            if(mp.find(currKey) != mp.end())
            {
                ans += mp[currKey];
                mp[currKey] +=1;
                
            }
            else
                mp[currKey] = 1;
                
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
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.getSubstringWithEqual012(s)<<endl;
	}
    return 0;
}

// } Driver Code Ends