class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int largeMax = 0, smallMax = 0, idx = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int curr = nums[i];
            
            if(curr > largeMax)
            {
                smallMax = largeMax;
                largeMax = curr;
                idx = i;
            }
            else if(curr > smallMax){
                smallMax = curr;
            }
        }
        
        
        return largeMax >= 2*smallMax ? idx:-1;
        
    }
};