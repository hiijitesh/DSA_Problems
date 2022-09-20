class Solution {
public:
    int getLCS(string &s1, string &s2, int i, int j, int m, int n,  vector<vector<int>>&dp)
    {
        if(i>= m or j >= n)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int ans = 0;
        if(s1[i] == s2[j])
        {
              ans =  1 + getLCS(s1, s2, i+1, j+1, m, n,dp);
        }
          
        else
        {
            int firstCase = getLCS(s1, s2, i+1, j, m, n, dp);
            int secondCase = getLCS(s1, s2, i, j+1, m, n, dp);
            
            ans = max(firstCase, secondCase);
        }
        
        return dp[i][j] = ans;
    }
    int longestCommonSubsequence(string s1, string s2) {
        
        int m = s1.size();
        int n = s2.size();
        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
        return getLCS(s1, s2, 0, 0, m, n, dp);
    }
    
};