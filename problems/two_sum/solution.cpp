class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map< int , int> mp;

        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]] = i;

        for(int i = 0; i < nums.size(); i++)
        {
            int curr = target - nums[i];
            // cout<<"curr"<<curr<<" ";
            if(mp.find(curr) != mp.end() && i != mp[curr])
                return {i, mp[curr]};
        }
        return {};
    }
};