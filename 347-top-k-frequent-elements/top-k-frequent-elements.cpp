class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp; // elemnt, freq
        // Min HEAP method
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap; // freq, elemnt

        for(auto& num:nums){
            mp[num]++;
        }

        for(auto& ele:mp){
            minHeap.push({ele.second, ele.first});
            if(minHeap.size()>k){
                minHeap.pop();
            }
        }
        vector<int> ans;
       
       while(minHeap.size()>0){
            int currNum = minHeap.top().second; /// second is element
            ans.push_back(currNum);
            minHeap.pop();
       }

       return ans;

    }
};