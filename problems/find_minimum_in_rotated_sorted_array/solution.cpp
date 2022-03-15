class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size()-1;
        
        while ( start <= end)
        {
            int mid = start + ( end - start )/2;
            
            //if array is sorted but not rotated
            
            if( nums[start] <= nums[end]) return nums[start];
            
            if( nums[mid] > nums[mid+1]) return nums[mid+1];
            
            if( nums[mid] < nums[mid-1]) return nums[mid];
                        
            if( nums[start] < nums[mid]) {
                start= mid+1;
            }
            else
            {
                end=mid-1;
            } 
        }
        return -1;
    }
};