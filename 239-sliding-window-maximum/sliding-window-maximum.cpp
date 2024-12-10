class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> ans;
        // suppose k > array len
        // edge case
        if(k>nums.size()){
        ans.push_back(*max_element(nums.begin(),nums.end()));
        return ans;
        }

        deque<int> q;

        int i = 0, j = 0;
        while(j < nums.size()){
            //check if curr element is greater than the back of q
            while(q.size()>0 && q.back()<nums[j]){
                q.pop_back();
            }
            q.push_back(nums[j]);

            // check windows sizwe
            if(j-i+1 < k) 
                j++;

            else if(j-i+1 == k){
                //calculate ans
                ans.push_back(q.front());

            //slide the windows
            //check arr[i] is include in q.front() the remove it
                if(nums[i] == q.front())
                    q.pop_front();
                j++;
                i++;
            }
        }
        return ans;
        
    }
};