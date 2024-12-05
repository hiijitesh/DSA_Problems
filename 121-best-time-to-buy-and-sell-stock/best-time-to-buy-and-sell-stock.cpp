class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1, n = prices.size();

        // whenver we get minimum value stop the left at that val
        // and move right till end of the array but
        // we get another minm val than left pointer then 
        // move the left pointer to new min val and now start finding the new max value

        int ans = 0;
        while(right < n){

            if(prices[left]< prices[right]){
                ans = max(ans, prices[right]-prices[left]);
            }else{
                left = right;
            }

            right++;
        }

        return ans;
    }
};