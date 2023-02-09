class Solution {
public:
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> ans;
        vector<string>curr;
        solve(s, 0, s.size()-1, curr, ans);
        return ans;
        
    }
    bool isPalindrom(string s, int start, int end)
    {
        while(start <= end)
        {
            if(s[start] != s[end])
                return false;
            start++;
            end--;
        }
        
        return true;
    }
    
    void solve(string s, int start, int end, vector<string>&curr, vector<vector<string>> &ans )
    {
        if(start > end)
        {
            ans.push_back(curr);
            return;
        }
            
        for(int i = start; i <= end; i++)
        {
            if(isPalindrom(s, start, i))
            {
                curr.push_back(s.substr(start, i - start + 1));
                solve(s, i+1, end, curr, ans);
                curr.pop_back();
            }
        }
        
        return;
    }
    
    
};