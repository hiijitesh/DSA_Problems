class Solution {
public:
    
    bool isVowel(char s)
    {
        return (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u');
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        
        int ans = 0;
        for(int i = left; i <= right; i++)
        {
            string currWord = words[i];
            
            if(isVowel(currWord[0]) && isVowel(currWord[currWord.size()-1]))
            {
                ans++;
            }
        }
        
        return ans;
    }
};