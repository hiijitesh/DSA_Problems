class Solution
{
    public:
        int jump(vector<int> &arr)
        {
            int n = arr.size();
            int jump = 1;

            int step = arr[0];
            int maxReachablePoint = arr[0];

            if (n <= 1) return 0;

            if (arr[0] == 0) return -1;

            int currIdx;

            for (currIdx = 1; currIdx < n; currIdx++)
            {
                if (currIdx == n - 1)
                {
                    return jump;
                }
                maxReachablePoint = max(maxReachablePoint, currIdx + arr[currIdx]);

                step--;

                if (step == 0)
                {
                    jump++;
                    if (currIdx >= maxReachablePoint)
                    {
                        return -1;
                    }
                    step = maxReachablePoint - currIdx;
                }
            }

            return -1;
        }
};