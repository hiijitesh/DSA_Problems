class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        int prod = 1;
        int zeroCount = 0;

        for(auto& num:nums){
            if(num == 0)
                zeroCount++;
            else
                prod*=num;
        }

        for(int i = 0; i < n; i++){
            if(zeroCount>1){
                res[i] = 0;
            }

            else if(zeroCount == 1){
                if(nums[i] == 0)
                    res[i] = prod;
                else
                    res[i] = 0;
            }
            else
                res[i] = prod/nums[i];
        }


        return res;
    }
};