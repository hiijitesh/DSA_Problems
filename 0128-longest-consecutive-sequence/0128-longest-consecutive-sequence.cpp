class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s;
        
        for(auto &x: nums) s.insert(x); //store the element in set so that we can check on later that wether particular element does exist in set or not
        
        int longestCount = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int  currCount = 0;
            int currNum = nums[i]-1; // suppose curr num = 3, so will check 4,5,6,7 exist or not
            
            if(s.find(currNum) == s.end())
            {
                //this means it will not check for the 5, 6, 7, it will direct start from the 9 or 10 
            
            while(s.find(currNum+1) != s.end())
            {
                currCount +=1;
                currNum +=1;
            }
            
            longestCount = max(longestCount, currCount);
            }
            
        }
        return longestCount;
    }
};