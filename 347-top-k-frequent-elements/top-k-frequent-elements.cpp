class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp; // elemnt, freq

        for(auto& num:nums){
            mp[num]++;
        }
        // MAX HEAP METHOD
        // store the freqency element in maxHeap
        priority_queue<pair<int, int>> maxHeap; // ele, frequency

        for(auto& m:mp){
            maxHeap.push(make_pair(m.second, m.first));
        }

        vector<int> ans(k);
        for(int i = 0; i < k; i++){
            ans[i] = maxHeap.top().second;
            maxHeap.pop();
        }
        return ans;

    }
};