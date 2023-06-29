class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        if(k>nums.size())
        {
            ans.push_back(*max_element(nums.begin(),nums.end()));
            return ans;
        }

        deque<int>q;
        int i=0,j=0;
        while(j<nums.size())
        {
            // curr lement is greater than dq back means those are absurd
            while(!q.empty() && q.back()<nums[j]) 
                q.pop_back();

            q.push_back(nums[j]);
            //move the j pointer
            if(j-i+1<k) j++;

            //windows size === k
            else if(j-i+1==k){
                ans.push_back(q.front());
                //remove the calculations
                if(q.front()==nums[i]) 
                    q.pop_front();
                i++;
                j++;
            }
        }
        return ans;
    }
};