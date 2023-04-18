class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<char> curr;
        if(s.size() == 0) return true;
        
        for(int i = 0; i < s.size(); i++)
        {
            char currChar = tolower(s[i]);
            if(isalnum(currChar)){
                // cout<<currChar<<" ";
                curr.push_back(currChar);
            }          
        }
                
        int i = 0, j = curr.size()-1;
        
        while(i <= j)
        {
            if(curr[i] != curr[j])
                return false;
            i++;
            j--;
        }
        
        return true;
    }
};