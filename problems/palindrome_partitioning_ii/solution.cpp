class Solution {
public:
    bool isPalindrome( string &s, int start, int end){
        
        while(start <= end){
            if(s[start]!= s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    int minNumberOfCut(string &s,int start , int end, vector<vector<int>> &dp ){
        
        if ( isPalindrome(s,start,end) ) return 0;
            
        if (dp[start][end] != -1) {
            return dp[start][end];
        }
        
        int ans = INT_MAX / 2;
        
        for ( int currIdx=start; currIdx<end; currIdx++){
             if (isPalindrome(s, start, currIdx)){
                 
                 int leftHalfCut  = minNumberOfCut(s,start,currIdx ,dp);
                 int rightHalfCut = minNumberOfCut(s, currIdx+1, end ,dp);
                 ans= min(ans,1+ leftHalfCut + rightHalfCut);
             }         
        }
        return dp[start][end]=ans;
        
    }
    int minCut(string s) {
        
        vector<vector<int> >dp(2001 ,vector<int>(2001, -1));
        return minNumberOfCut(s, 0,s.length()-1 ,dp);
        
    }
};