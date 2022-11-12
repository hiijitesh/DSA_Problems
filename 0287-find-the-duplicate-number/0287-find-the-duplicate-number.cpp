class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
// Count sort
        int n = nums.size();
        int count[n+1];
        memset(count, 0, sizeof(count));
        
        for(int i = 0; i < n; i++)
        {
            count[nums[i]]++;
            
            if(count[nums[i]] > 1)
                return nums[i];
            
        }
        
        return nums.size();
        
    }
};