class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans = 0;
        int release = 0;
        
        //store the char and its index, so we can get length of longest string
        unordered_map<char, int> mp;
        
        for(int aquire = 0; aquire < s.size(); aquire ++)
        {
            
            char currChar = s[aquire];
            
            //currchar is present in the map then move release pointer 
            //mp[currChar] >= release , index of currChar is greater than release pointer 
            if(mp.find(currChar) != mp.end() && mp[currChar] >= release)
                //move the release one step ahead
                release = mp[currChar] + 1;
            
            int currLen = aquire - release + 1;
            mp[currChar] = aquire;
            ans = max(ans, currLen);
        }
        return ans;
    }
};