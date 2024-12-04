class Solution {
public:
    bool isPalindrome(string str) {
        
        //intuition --> use two pointer and check if current character is alphanumeric then continue else left++ && right --
        //iff currchar is alpha numeric then compara s[left] != s[right] return false
        
        int s = 0, e = str.size()-1;
        
        while( s < e)
        {
            if(!isalnum(str[s]))
                s++;
            
            else if(!isalnum(str[e]))
                e--;
            
            else if(tolower(str[s]) != tolower(str[e]))
                return false;
            
            else
            {
                s++;
                e--;
            }
                
        }
        return true;
    }
};