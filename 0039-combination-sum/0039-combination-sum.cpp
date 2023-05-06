class Solution {
public:
    void solve(vector<int>& nums, int currIdx,int target, vector<int>&validSet,  vector<vector<int>> &ans){
        
        if(target == 0)
        {
            ans.push_back(validSet);
            return;
        }
        
        if(currIdx >= nums.size())
        {
             return;
        }
        
        //take current element 
        int currNum = nums[currIdx];
        
        if(currNum <= target)
        {
            //take currNum into validset
            validSet.push_back(currNum);
            solve(nums, currIdx, target-currNum, validSet, ans);
            validSet.pop_back();
        }
         solve(nums, currIdx+1, target, validSet, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        vector<int>validSet;
        
        solve(nums, 0, target, validSet, ans);
        return ans;
    }
};