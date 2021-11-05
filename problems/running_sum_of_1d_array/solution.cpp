class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n= nums.size();
        // vector<int> ans;
        // int sum=0;
        // int i=1; 
        for(int i=1; i<n; i++){
             
            nums[i]+=nums[i-1];
            // nums.push_back(nums);
        }  
           return nums;    
    }
        
};

// vector<int> runningSum(vector<int>& nums) {
//         int i = 1;
//         while (i<nums.size()){
//             nums[i]+=nums[i-1];
//             i++;
//         }
//         return nums;
//     }