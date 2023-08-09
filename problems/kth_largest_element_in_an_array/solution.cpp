class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        // priority_queue<int> maxheap;
         priority_queue <int, vector<int>, greater<int>> minheap;
        for(auto &num :nums){
            minheap.push(num);
            if(minheap.size() > k) minheap.pop();
        }
     return minheap.top();
    }
};