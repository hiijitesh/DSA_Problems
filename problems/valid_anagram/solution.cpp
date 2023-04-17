class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) 
            return false;
        
        unordered_map<int, int> mp;
        
        for(auto &e :s)
            mp[e]++;
        
        for(int i = 0; i < t.size(); i++)
        {
            char currChar = t[i];
            
            if(mp.find(currChar) != mp.end())
                mp[currChar]-=1;
            
            if(mp[currChar] == 0)
                mp.erase(currChar);
        }
        
        return mp.size() == 0;
    }
};