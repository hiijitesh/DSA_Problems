class Solution
{
    public:
        vector<vector < int>> merge(vector<vector < int>> &intervals)
        {

            vector<vector < int>> ans;

            if (intervals.size() == 0) return ans;

            sort(intervals.begin(), intervals.end());

            ans.push_back(intervals[0]);

            int j = 0;
            for (int curr = 1; curr < intervals.size(); curr++)
            {

               	//overlaping
                if (intervals[curr][0] <= ans[j][1])
                {
                    ans[j][1] = max(ans[j][1], intervals[curr][1]);
                }
                else
                {
                    j++;
                    ans.push_back(intervals[curr]);
                }
            }
            return ans;
        }
};