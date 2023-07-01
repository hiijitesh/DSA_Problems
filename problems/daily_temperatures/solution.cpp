class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        // pair of <currday, currTemp>
        stack<pair<int, int>> st;
        vector<int> ans(temp.size());

        for(int i = 0; i < temp.size(); i++){

            int currDay = i;
            int currTemp = temp[i];
            //if stack have already data
            while(st.size() > 0 &&  currTemp > st.top().second)
            {
                int prevDay = st.top().first;
                st.pop();
                ans[prevDay] = currDay-prevDay;
            }
            st.push({currDay, currTemp});
        }
        return ans;
    }
};