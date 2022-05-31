// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:

   string  common_String(string s1, string s2){
   	    // Code here
   	  string s="";
   	  set<int> ss1;
   	  set<int> ss2;
   	  for(int i=0;i<s1.size();i++){
   	      ss1.insert((int)s1[i]);
   	  }
   	  for(int i=0;i<s2.size();i++){
   	      ss2.insert((int)s2[i]);
   	  }
   	  for(auto it:ss1){
   	      if(find(ss2.begin(),ss2.end(),it)!=ss2.end()){
   	          s.push_back((char)it);
   	      }
   	  }
   	  if(s.size()!=0){
   	      return s;
   	  }else{
   	      return "nil";
   	  }
   	    
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s1, s2;
		cin >> s1 >> s2;
		Solution ob;
		string ans = ob.common_String(s1, s2);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends