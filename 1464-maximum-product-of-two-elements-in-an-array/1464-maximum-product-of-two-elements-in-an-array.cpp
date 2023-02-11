class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        //This Problem is pattern of finding largest and second largest element in the array
        int maxi1 = INT_MIN, maxi2 = maxi1;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] >= maxi1 )
            {
                maxi2 = maxi1;
                maxi1 = nums[i];
            }
            
            else if(nums[i] > maxi2 && nums[i] < maxi1)
            {
                maxi2 = nums[i];
            }
        }
        
        int res = (maxi1-1)*(maxi2-1);
        
        return res;
        
    }
};