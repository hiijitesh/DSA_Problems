class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(auto i = 0; i < nums.size(); i++){
            int remaingNum = target - nums[i];
            if(mp.count(remaingNum)){
                return {mp[remaingNum], i};
            }

            mp[nums[i]] = i;
        }
        return {};
        
    }
};