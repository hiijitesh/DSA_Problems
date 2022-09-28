class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int jump = nums[0];
        
        for(int i = 0; i < n; i++)
        {
            if(jump < i)
                return false;
            
            jump = max(jump, i+nums[i]);
        }
        
        return true;
    }
};