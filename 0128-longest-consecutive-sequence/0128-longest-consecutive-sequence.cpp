class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s;
        
        for(auto x : nums)
            s.insert(x);
        
        int ans = 0;
        
        
        for(int i = 0; i < nums.size(); i++)
        {
            int len = 0;
            int currNum = nums[i] -1;
            
            if(s.find(currNum) == s.end())
            {
                while(s.find(currNum+1) != s.end())
                {
                    len++;
                    currNum+=1;
                }
                
                ans = max(ans, len);
            }
        }
        
        return ans;
    }
};