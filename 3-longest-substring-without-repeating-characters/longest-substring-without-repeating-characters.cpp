class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int rel = 0, ans = 0;
        unordered_map<char, int> mp;

        for(int acquire = 0; acquire < s.size(); acquire++){
            char curr = s[acquire];

            if(mp.find(curr) != mp.end() && mp[curr] >= rel){
                rel = mp[curr]+1;
            }

            int substrLen = acquire - rel + 1;
            mp[curr] = acquire;
            ans = max(ans, substrLen);

        }
        return ans;
    }
};