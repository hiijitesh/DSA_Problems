class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
            return false;

        unordered_map<char, int> mp;

        for(auto ch:s){
            mp[ch]++;
            // cout<<mp[ch];
        }

        for(auto match:t){
            if(mp.find(match) != mp.end()){
                // cout<<"INSIDE"<<" ";
                mp[match]--;
                cout<<mp[match];
                
            }
        }

        for(auto ele:mp){
            if(ele.second != 0){
                return false;
            }
        }

        return true;
    }
};