class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int, bool> mp;
        
        for(auto &x:nums) mp[x] = true;
        
        for(auto &val:nums)
        {
            if(mp.find(val-1) != mp.end())
                mp[val] = false;
        }
        
        int longest = 0;
        for(auto &val:nums)
        {
            int currCount = 1;
            int currNum = val;
            if(mp[val]) // curr num is starting point
            {
                while(mp.count(currNum+1))
                {
                    currNum+=1;
                    currCount+=1;
                }
                
                longest = max(longest, currCount);
            }
        }
        
        return longest;
    }
};