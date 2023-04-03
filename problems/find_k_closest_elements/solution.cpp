class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int> ans;
        
        priority_queue<pi>minHeap;
        
        for(int i = 0; i < arr.size(); i++)
        {
            int diff = abs(arr[i]-x);
            minHeap.push({diff, arr[i]});
            
            while(minHeap.size() > k)
            {
                minHeap.pop();
            }
        }
        
        while(minHeap.size() > 0)
        {
            int curr = minHeap.top().second;
            ans.push_back(curr);
            minHeap.pop();
        }
         sort(ans.begin(), ans.end());
        return ans;
    }
};