class Solution {
public:
    void generateSubsets(int idx, vector<int>&nums, vector<int>&currset, set<vector<int>>&result){

        if(idx >= nums.size()){
            result.insert(currset);
            return;
        }

        int val = nums[idx];
        currset.push_back(val);
        generateSubsets(idx+1, nums, currset, result);
        currset.pop_back();
        generateSubsets(idx+1, nums, currset, result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>>result;
        vector<int> currset;

        sort(nums.begin(), nums.end());
        generateSubsets(0, nums, currset, result);

        //need ans in vector
        vector<vector<int>> ans(result.begin(), result.end());
        return ans;
    }
};