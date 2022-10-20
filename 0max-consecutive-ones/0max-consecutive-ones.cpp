class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int ans = INT_MIN;
        int cnt = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 1)
            {
                cnt++;
                ans = max(ans, cnt);
            }
            if(nums[i] == 0) 
            {
                cnt = 0;
                ans = max(ans, cnt);
                continue;
            }
        }
        
        return ans;
    }
};

// [0]
// [1, 0]
// [0, 1,0]
// [1,0,1]