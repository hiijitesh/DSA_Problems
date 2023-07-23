class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int aq = 0 , rel = 0,ans = 0, maxCount = 0;
        unordered_map<char, int> mp;

        while(aq < s.size()){
            char curr = s[aq];
            mp[curr]++;
            maxCount = max(maxCount, mp[curr]);

            int winLen = aq-rel+1;

            if(winLen-maxCount <= k)
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
