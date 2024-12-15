class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int i = 0, j = 0;
        double ans = INT_MIN, sum = 0;

        while(i < nums.size()){

            sum += nums[i];
            int win = i-j+1;
                // cout<<"SUM: "<<sum/k<<endl;

            if(win == k){
                double avg = sum /k;
                ans = max(ans, avg);
                sum -= nums[j];
                j++;
            }

            i++;
        }
        return ans;
    }
};