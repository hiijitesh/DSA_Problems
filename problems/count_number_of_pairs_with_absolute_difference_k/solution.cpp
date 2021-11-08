class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        // int i=0,j=i+1
        
       for(int i=0; i<n ; i++){
           for(int j=i ; j<n ; j++){ //here yaha j=i+1 se suru nahi kr sakte qki jab i=n-a jpha tab j finish ho chuka hoga fir ek element of array reh jauyea so j=i se instiate kr sakte hai
               
                if(abs(nums[i]-nums[j])==k){ //yaha pe main absolute value nums[i]-nums[j]==k ka le raha tha pahle jabki yha me sirf abs value nums[i]-nums[j] ka lena tha
                    count++;
                }
            }
        }
        return count;
    }
};

