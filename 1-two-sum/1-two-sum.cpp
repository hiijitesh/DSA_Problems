class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int x) {
       
        // sort(nums.begin(), nums.end());
        vector<int> ans;
        int i = 0, n = nums.size();
        
        while(i < n)
        {
            int j = i+1;
            while(j < n){
                
                if(nums[i] == x - nums[j]){
                    ans.push_back(i);
                    ans.push_back(j);
                }
                j++;
            }
           i++;
        }
        return ans;
    }
};