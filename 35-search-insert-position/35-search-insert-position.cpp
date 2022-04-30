class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        
        int start=0;
        int end=nums.size()-1;
        
        int ans = -1;
        
        while( start <= end)
        {
            int mid = start + ( end - start )/2;
            
            if( target == nums [mid]) {
                return mid;
            }
            
            else if ( target < nums[mid])
            {
                
                 ans= mid;
                 end = mid-1;
                
            }
            else
            {
                             
                 start = mid +1;

            }
               
        }
        
        if( ans == -1) {
            return nums.size();
        }
        
        
        return ans;
        
    }
};