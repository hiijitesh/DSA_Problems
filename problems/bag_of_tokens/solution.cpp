class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(), tokens.end());
        
        int start = 0, end = tokens.size()-1;
        
        int score = 0, ans = 0;
        
        while(start <= end)
        {
            if(power >= tokens[start])
            {
                power -= tokens[start ];
                ans = max(ans,++score);
                start++;
            }
            
            else if(score > 0)
            {
                score--;
                power += tokens[end];
                end--;
            }
            else
                break;
        }
        
        return ans;
    }
};