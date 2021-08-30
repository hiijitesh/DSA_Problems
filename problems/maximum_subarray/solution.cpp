class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       // vector<int> ans;
        int n= nums.size();
        int maxm=INT_MIN;
        int sum=0;
        for(auto it:nums){
            sum+=it;
            // maxm=max(sum,maxm);
            // if(sum<0) sum=0;
            if(sum>maxm)  maxm=sum;
            // else continue;
            if(sum<0)  sum=0;            
            // else{
            //     break;
            // }
          }
           return maxm;
            
        }
};