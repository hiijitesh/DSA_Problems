class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int ans = 0;
        unordered_map<int, int> mp;
        
        int prefixSum = 0;
        
        mp[prefixSum] = 1;
        
        for(int i = 0; i < nums.size(); i++)
        {
            prefixSum += nums[i];
            
            prefixSum = ((prefixSum % k) + k ) % k;
            
            if(mp.find(prefixSum) != mp.end())
            {
                ans += mp[prefixSum];
                mp[prefixSum] += 1;
            }
            else
                mp[prefixSum] = 1;
        }
        
        return ans;
    }
};