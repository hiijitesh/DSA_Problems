class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int, int> mp;

        int aq = 0, rel = 0, ans = 0;
        int maxCount = 0;

        while(aq < s.size())
        {
            int curr = s[aq];

            mp[curr]++;
            maxCount = max(maxCount, mp[curr]);

            int winLen = aq-rel+1;
            if(winLen - maxCount<=k)
                ans = max(ans, winLen);
            else{
                mp[s[rel]]--;
                rel++;
            }

            aq++;
        }
        return ans;
    }
};