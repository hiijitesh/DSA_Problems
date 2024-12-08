class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int rel = 0, ans = -1, maxCount = 0;
        unordered_map<char, int> count;

        // currentWindow - most freqnt cnt <= K so we can
        // think wethere this windows is valid or not

        for(int aq = 0; aq < s.size(); aq++){
            count[s[aq]]++;
            maxCount = max(maxCount, count[s[aq]]);

            int winLen = aq-rel+1;
            if(winLen-maxCount <= k){
                ans = max(ans, winLen);
            }
            else{
                count[s[rel]]--;
                rel++;
            }
        }
        return ans;
    }
};