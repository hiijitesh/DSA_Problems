class Solution {
public:
    bool isEvenDigits(int x)
    {
        
        int digitCnt = 0;
         while(x > 0)
         {
             x % 10;
             digitCnt++;
             x = x/ 10;
         }
        
        if(digitCnt % 2 == 0) return true;
        
        return false;
    }
    int findNumbers(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(isEvenDigits(nums[i]))
            {
                count++;
            }
        }
        
        return count;
    }
};