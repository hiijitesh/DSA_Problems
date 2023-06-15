class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int, bool> mp;

        for(auto &num:nums)
            mp[num] = true;
        for(auto &num:nums)
        {
            if(mp.find(num-1) != mp.end())
                mp[num] = false;
        }
        int ans = 0;
        for(auto &num:nums)
        {
            int count = 1;
            int currNum = num;
            //check if currNum is starting point of consecutive
            if(mp[num])
            {
                //check if next currNum exist in map then count++
                while(mp.count(currNum+1))
                {
                    count++;
                    currNum +=1;
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};