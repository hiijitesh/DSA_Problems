class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans(nums.size());
        
        int low = 0;
        int high = nums.size()-1;
        
        for( int  k = nums.size()-1; k>=0; k--){
            
            if(abs(nums[low]) >abs(nums[high])){
                ans[k] = nums[low]*nums[low++];
                // low++;
            } 
            else{
                ans[k] = nums[high]*nums[high--];
                // high--;
            }
            
        }
        return ans;
       
        
    }
};