class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> mp;
        
       if(s.size() != t.size())
            return false;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(mp.find(s[i]) != mp.end())
            {
                mp[s[i]] += 1;
            }
            else
            {
                mp[s[i]] = 1;
            }
        }
        
        
        
        for(int i = 0; i < t.size(); i++)
        {
            char currChar = t[i];
            
            if(mp.find(currChar) != mp.end())
            {
                mp[currChar] -= 1;
                
            }
            
            if(mp[currChar] == 0)
                
                mp.erase(currChar);
            
        }
        
        return mp.size() == 0;
    }
};