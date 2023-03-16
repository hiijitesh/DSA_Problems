class Solution {
public:
    int maxScore(vector<int>& nums) {
        
        int n = nums.size();
        vector<long long> prefix(n);
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        prefix[0] = nums[0];
        
        int ans = 0;
        if(prefix[0] > 0) ans++;
        
        for(int i = 1 ; i < n; i++)
        {
            prefix[i] = prefix[i-1] + nums[i];
            
            if(prefix[i] > 0) ans++;
        }
        
        return ans;
        
    }
};