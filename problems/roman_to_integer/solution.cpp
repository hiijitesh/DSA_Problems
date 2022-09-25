class Solution {
public:
    int romanToInt(string str) {
        
        if(str.size() == 0)
            return 0;
        
        unordered_map<char, int> table = {
            
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int sum = table[str.back()];
        
        for(int i = str.size()-2; i >=0; i--)
        {
            if(table[str[i]] < table[str[i+1]])
                sum-=table[str[i]];
            else
                sum+= table[str[i]];
        }
        
        return sum;
        
    }
};