class Solution {
public:
   void  generateSubsets(int currIdx,vector<int>& nums, vector<int>&curr, vector<vector<int>> &result){
        if(currIdx >= nums.size()){
            result.push_back(curr);
            return;
        }
        //call for consider
        int currVal = nums[currIdx];
        curr.push_back(currVal);
        generateSubsets(currIdx+1, nums, curr, result);
        curr.pop_back();
        generateSubsets(currIdx+1, nums, curr,result);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int>curr;
        generateSubsets(0,nums, curr, result);
        return result;
    }
};