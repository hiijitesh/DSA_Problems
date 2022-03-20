class Solution {
public:
    bool ifPossible(vector<int>& nums,int currentIndex,int sum,unordered_map<string,bool> &m){
       
       if( sum==0)
         return true; 
       if(currentIndex >= nums.size())
         return false;  
       
       string current_key=to_string(currentIndex)+"-"+to_string(sum);
       if(m.find(current_key)!=m.end())
       return m[current_key];
        
       bool include =  false;
        if(sum >= nums[currentIndex]){
             include = ifPossible(nums,currentIndex+1,sum-nums[currentIndex],m);
        }
        
         if(include){
             m[current_key] = include;
            return true;
        }
        
       bool exclude = ifPossible(nums,currentIndex+1,sum,m);  
        
       return m[current_key]=(include || exclude);  
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto i:nums)
          sum+=i;
        
        if(sum%2!=0)
          return false;
        
        unordered_map<string,bool> m;
        return ifPossible(nums,0,sum/2,m);
    }
};