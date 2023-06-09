class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> mp;

        int ans = 0, rel = 0, acquire = 0;
        int maxCount = 0;

        while(rel < s.size())
        {
            char currChar = s[rel];
            mp[currChar]++;

            maxCount = max(maxCount,  mp[currChar]);
            int winLen = rel - acquire + 1;
            
            if(winLen - maxCount <= k)
                ans = max (ans, winLen);
            else
                {
                    mp[s[acquire]]--;
                    acquire++;
                }
            
            rel++;
               
        }
        return ans;
    }
};