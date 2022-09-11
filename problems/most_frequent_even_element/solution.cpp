class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        map<int, int> mp;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] %2 == 0) 
                mp[nums[i]]++;
        }
        
        if(mp.empty()) return -1;
        
        int ans = 0;
        int maxVal = INT_MIN;
        
        for(auto it : mp)
        {
            if(it.second > maxVal)
            {
                maxVal = it.second;
                ans = it.first;
            }
        }
        
        return ans;
    }
};