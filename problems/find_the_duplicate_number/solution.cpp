class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
//map
        int n = nums.size();
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
            
        }
        
        for(auto &m:mp)
        {
            if(m.second > 1)
                return m.first;
        }
        
        
        return nums.size();
        
    }
};