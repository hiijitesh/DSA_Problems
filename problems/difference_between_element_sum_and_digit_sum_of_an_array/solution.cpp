class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int totalSum = 0;
        int digitSum = 0;
        
        for(auto x : nums) totalSum+=x;
        
        
        for(int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            
            while (n > 0)
            {
                digitSum += n % 10;
                n = n/10;
            }
        }
        
        return abs(totalSum - digitSum);
    }
};