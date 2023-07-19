class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> mp;

        int ans = 0, rel = 0;
        for(int aq = 0; aq < s.size(); aq++){

            char curr = s[aq];
            //if curr exits in map means we need to move rel pointer only
            //aslo check rel should not corss aq pointer
            if(mp.find(curr)!=mp.end() && mp[curr] >= rel)
                //rel will move by 1 wrt its last idx of curr char incase of duplication
                rel = mp[curr]+1;

            int len = aq-rel+1;
            mp[curr] = aq;
            ans = max(ans, len);
        }
        return ans;
    }
};