class Solution
{
    public:
        int maxSubArray(vector<int> &nums)
        {
            int oSum = INT_MIN;
            int currSum = 0;
            
            for (auto it: nums)
            {
                currSum += it;
                oSum = max(currSum, oSum);
                if (currSum < 0) currSum = 0;
            }
            return oSum;
        }
};