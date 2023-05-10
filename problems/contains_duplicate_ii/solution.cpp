class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        

        for(int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if(mp.count(num))
                {int currIndex = abs(mp[num] - i);
                if(currIndex<=k)
                    return true;}
        
            mp[num] = i;
        }

        return false;
    }
};

