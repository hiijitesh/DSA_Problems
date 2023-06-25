class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<int, int> mp;
        int length = 0, rel = 0;

        for(int aq = 0; aq< s.size(); aq++)
        {
            char currChar = s[aq];

            //check if currchar present in map or and also check index of aq is >= rel idx

            if(mp.find(currChar) != mp.end() && mp[currChar] >= rel)
                rel = mp[currChar]+1;

            int currLen = aq-rel+1;
            mp[currChar] = aq;
            length = max(length, currLen);
        
        }
        return length;
    }
};