class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int ans = 0;
        set<int> s;
        
        for(auto num:nums)
            s.insert(num);
        
        for(auto num : nums)
        {
            if(!s.count(num-1))
            {
                int currNum = num;
                int currLen = 1; // there will be atleast size of one sequence
                
                while(s.count(currNum+1))
                {
                    currNum+=1;
                    currLen+=1;
                }
                
                ans = max(ans, currLen);
            }
        }
        
        return ans;
    }
};