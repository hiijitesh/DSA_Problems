class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        
        if(nums.size()<=2)
            return -1;
        
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        
        for(auto &num:nums)
            if(num < maxi && num > mini)
                return num;
        
        return -1;        
    }
};