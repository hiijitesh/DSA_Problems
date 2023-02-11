class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        
        int maxRes = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                int currDiff = (nums[i]-1) * (nums[j]-1);
                maxRes = max(maxRes, currDiff);
            }
        }
        
        
        return maxRes;
    }
};