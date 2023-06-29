class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s2.size() < s1.size())
            return false;

        vector<int> mp1(26, 0), mp2(26,0);
        for(auto &ch:s1)
            mp1[ch-'a']++;

        int aq = 0, rel = 0;

        while(aq < s2.size())
        {
            char curr = s2[aq];
            mp2[curr-'a']++;
            int winSize = aq-rel+1;
            if(winSize == s1.size())
            {
                if(mp1 == mp2)
                    return true;
            }
            
            if(winSize < s1.size()) aq++;
            else {
                mp2[s2[rel]-'a']--;
                rel++;
                aq++;
            }
        }
        return false;
    }
};