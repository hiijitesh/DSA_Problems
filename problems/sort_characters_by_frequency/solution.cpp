class Solution {
public:
    string frequencySort(string s) {
    
        unordered_map<char, int> freq;
        priority_queue<pair<int, char>> maxHeap;
        
       for(auto c:s)
            freq[c]++;
        
        for(auto it: freq)
                maxHeap.push({it.second, it.first});
            
        s = "";
        
        while(maxHeap.size()> 0)
        {
            s += string(maxHeap.top().first, maxHeap.top().second);
            maxHeap.pop();
        }
        
        return s;
        
    }
};