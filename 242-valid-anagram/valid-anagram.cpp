class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};

        for(char x:s){
            count[x-'a']++;
        }

        for(char ele:t){
            count[ele-'a']--;
        }

        for(auto val:count){
            if(val != 0){
                return false;
            }
        }
        return true;
    }
};