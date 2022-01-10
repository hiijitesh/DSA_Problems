class Solution {
public:
     
        int totalWays( vector<int> &nums, int target, int currIndex, unordered_map<string, int> &mp){
            
            if(currIndex >= nums.size() && target!=0) return 0;
            
            if( currIndex >= nums.size() && target==0) return 1;
            
            string currKey= to_string(currIndex)+"_"+ to_string(target);
            
            if(mp.find(currKey)!=mp.end()) return mp[currKey];
            
            
            int PositiveSign= totalWays( nums, target-nums[currIndex], currIndex+1,mp);
            
            int NegativeSign= totalWays(nums, target+nums[currIndex], currIndex+1,mp);
            
            mp[currKey]=PositiveSign+NegativeSign;
            
            return PositiveSign+NegativeSign;
        }
        
        
    
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        
        
        unordered_map<string, int> mp;
        
        
        return totalWays( nums, target,0 ,mp);
          
// private:
       
        
        
    }     
        
    
};