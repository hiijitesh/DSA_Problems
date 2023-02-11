class Solution {
public:
    
    bool isValidVowels(char c){
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        //logic here is using prefix sum corresponding to the valid words
        //then query over the prefix sum
        
        vector<int> ans;
        vector<int> prefixSum;
        prefixSum.push_back(0);
        
        for(auto w :words)
        {
            int currVal = (isValidVowels(w[0]) && isValidVowels(w.back()));
            
            int lastVal = prefixSum.back();
            prefixSum.push_back(lastVal + currVal);
        }
        
        for(auto q :queries)
        {
            int currAns = prefixSum[q[1]+1] - prefixSum[q[0]];
            ans.push_back(currAns);
        }
        
        return ans;
        
    }
};