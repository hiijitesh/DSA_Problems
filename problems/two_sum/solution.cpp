class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>index;
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            
            //checking elememt in map
            if(mpp.find(target-nums[i])!=mpp.end()){
               index.push_back(mpp[target-nums[i]]);
               index.push_back(i);
                return index;
            }
            //if elememt not found in map then push it into map
            mpp[nums[i]]=i;
            
        }
    return index; //returning empty vector
    }
    
      
};