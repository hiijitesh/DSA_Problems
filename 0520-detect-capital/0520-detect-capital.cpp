class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int count = 0, idx = 0;
        
        for(int i = 0; i< word.size(); i++)
        {
            if(word[i] >= 'A' and word[i] <= 'Z')
            {
                count++;
                idx = i;
            }
        }
        
        if(count == word.size() or (count == 0) or (count == 1 and idx == 0))
           return true;
           
       return false;
    }
};