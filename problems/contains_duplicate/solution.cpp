class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        
        unordered_map<int, int> m;
        
        for(int i=0; i<nums.size(); i++)  m[nums[i]]++;
           
        
        for(auto &i:m) if(i.second>=2) return true;                        
               
        return false; 
            
            
        
        
       
        
        
        
//         int n = nums.size();
        
//         sort(nums.begin(), nums.end());
        
//        for ( int i=0; i<n-1; i++ ) 
//        {
           
//            if(nums[i]==nums[i+1]) return true;
//        }
           
       
//                 return false;  
                                               
        
    }
};