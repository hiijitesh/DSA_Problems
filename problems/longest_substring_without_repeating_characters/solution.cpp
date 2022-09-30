class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
     
        
        int ans = 0;
        int left = 0;
        
        unordered_map<char, int> mp;
        
        for(int right = 0; right < s.size(); right++)
        {
            
            char curr = s[right];
            
            if(mp.find(curr) != mp.end() && mp[curr] >= left)
                 left = mp[curr] + 1;
            
            int a = right - left +1;
            mp[curr] = right;
            ans = max(ans, a);
            
            
        }
        
        return ans;
    }
};