class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pre[n];
        int suff[n];
        pre[0] = 1;
        suff[n - 1] = 1;
        
        //this will store the product of previous element expect current one
        for(int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] * nums[i - 1];
            cout<<pre[i];
        }

        //this will store the product of previous element expect current one
        for(int i = n - 2; i >= 0; i--) {
            suff[i] = suff[i + 1] * nums[i + 1];
        }
        
        //logic is, suppose at index i = 3, we have prefix which is product upto i = 2 and suffix is product till i = 4 from i = n-1;

        //so if we multiplthe suff[i] * pre[i] this will be the product of element except self

        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            ans[i] = pre[i] * suff[i];
        }
        return ans;
    }
};