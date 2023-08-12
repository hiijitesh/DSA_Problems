class Solution {
public:
    void dfs(vector<int>&nums, int start,  vector<vector<int>> &ans){
        if(start >= nums.size()){
            ans.push_back(nums);
        }

        for(int i = start; i < nums.size(); i++){
            swap(nums[start], nums[i]);
            dfs(nums, start+1, ans);
            swap(nums[start], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        dfs(nums, 0, ans);
        return ans;
    }
};