class Solution {
public:
    
    bool solve( vector<int> & nums , int ci, int target, unordered_map<string,bool> &dp){
        
         // if ( target == 0 ) return true; 
        if ( target == 0) return true;
        
        if( ci >= nums.size()) return false;
        
        string key= to_string(ci)+"_"+to_string(target);
        
        if ( dp.find(key) !=dp.end() ) return dp[key];
        
        bool consider = false;
       
        if ( target >= nums[ci]){
            
            consider = solve (nums, ci+1,target-nums[ci],dp);
            
        }
        //why u added this line
        
         if(consider){
             dp[key] = consider;
            return true;
        }
        
        bool notconsider = solve( nums, ci+1, target,dp);
        
        return dp[key] = consider || notconsider;
         
         // return dp[ci][target];
        
    }
    bool canPartition(vector<int>& nums) {
        
        unordered_map<string,bool> dp;
        
        int target= accumulate(nums.begin(), nums.end(),0);
        
        // cout<<target;
        
        if ( target % 2 != 0) return false;
        
        return solve( nums,0,target/2,dp);
        
    }
};