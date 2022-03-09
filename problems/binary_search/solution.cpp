class Solution {
public:
    int binarySearch( vector<int> &nums, int target, int start, int end){

        if( start <= end){
             int mid= start + ( end- start)/2;
             cout<<mid;
                
             if( target == nums[mid]) return mid;
     
             else if( target > nums[mid]){
             
                  return binarySearch( nums, target, mid+1, end);
              }
              else
                    return binarySearch(nums,target,start,mid-1);
       }
        return -1;
        
        
    }
    int search(vector<int>& nums, int target) {
        
        return binarySearch(nums,target,0,nums.size()-1);
       
    }
};