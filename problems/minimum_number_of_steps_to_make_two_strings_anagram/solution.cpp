class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char, int> mp;
        for(auto &ch:s)
            mp[ch]++;
            
         for(auto &ch:t)
            mp[ch]--;
            
        int ans = 0;
        
        for(auto &i:mp)
        {
            cout<<i.second<<" ";
            if(i.second<0)
                ans += i.second;
        }
        return abs(ans);
    }
};
