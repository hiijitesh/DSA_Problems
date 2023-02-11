class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        long long res = 0;
        priority_queue<int> maxHeap;
        
        for(auto &x : gifts) maxHeap.push(x);
        
        while(k--)
        {
            int currVal = floor(sqrt(maxHeap.top()));
            maxHeap.pop();
            maxHeap.push(currVal);
        }
        
        
        while(!maxHeap.empty())
        {
            res += maxHeap.top();
            maxHeap.pop();
        }
        
        
        return res;
        
    }
};