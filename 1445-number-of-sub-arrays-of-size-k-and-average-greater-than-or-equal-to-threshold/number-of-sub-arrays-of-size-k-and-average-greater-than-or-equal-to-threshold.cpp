class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
    
        int i = 0, j = 0, count = 0;
        double sum = 0, avg = 0, ans = INT_MIN;

        while(i < nums.size()){

            sum += nums[i];
            int win = i-j+1;

            if(win == k){
                avg = sum/k;
                if(avg >= threshold) 
                    count++;
                sum -= nums[j];
                j++;
            }
            i++;
        }

        return count;
        
    }
};