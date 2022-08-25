class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char, int> mp;
        
        for(auto x : magazine){
            mp[x]++;
        }
        
        for(auto y :ransomNote){
            
            if(mp[y] > 0){
                mp[y]--;
                
            }
            else{
                return false;
            }
        }
        return true;
    }
};