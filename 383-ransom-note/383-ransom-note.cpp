class Solution {
public:
    bool canConstruct(string rans, string mag) {
        
        map<char, int> mp;
        
        for(int i = 0; i < mag.length(); i++){
            mp[mag[i]]++;
        }
        
        for(int j = 0; j < rans.length(); j++){
            
            if(mp[rans[j]] > 0) mp[rans[j]]--;
            
            else return false;
        }
        
        return true;
    }
};