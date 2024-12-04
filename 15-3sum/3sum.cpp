class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        // if array becoming ascending after sorting then we gonna never get the target so just break the loop
        // if we get consecutive num then just skip
        // also filter out the dupilcate entry

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) break;

            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int s = i+1, e = nums.size()-1;

            while(s < e){
                int sum = nums[i]+nums[s]+nums[e];

                if(sum > 0){
                    e--;
                }
                else if(sum < 0){
                    s++;
                }
                else{
                    ans.push_back({nums[i], nums[s], nums[e]});
                    s++;
                    e--;
                    // handle duplicate
                    while(s < e && nums[s] == nums[s-1]){
                        s++;
                    }
                }
            }
        }
        return ans;
    }
};