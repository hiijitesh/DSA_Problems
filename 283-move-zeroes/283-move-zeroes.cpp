class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
       int first =0, last = 0, n = nums.size()-1;
        
        while( first<=n){
            if(nums[first] != 0){
                swap(nums[first++], nums[last++]);
                
            }
            else
                first++;
        }
    }
};