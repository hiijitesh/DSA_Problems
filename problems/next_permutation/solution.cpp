class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    	int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
}; // class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n= nums.size(), i,j;
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 break;
//             }
//         }
//         if(i<0){
//             reverse(nums.begin(),nums.end());
//         }else{
//             for(int j=n-1; j>i;j--){
//                 if(nums[j]>nums[i]){
//                     break;
//                 }
//             }
//             swap(nums[i],nums[j]);
//             reverse(nums.begin()+i+1,nums.end());
//         }
        
//     }
// };