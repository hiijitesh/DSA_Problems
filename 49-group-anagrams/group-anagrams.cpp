class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>> anagrams;
         unordered_map<string, vector<string>>anagramCount;

         for(int i = 0; i < strs.size(); i++){

            string currStr = strs[i];
            sort(currStr.begin(), currStr.end());

            anagramCount[currStr].push_back(strs[i]);
            // if(anagramCount.find(currStr) != anagramCount.end()){
            // }else{
            //     anagramCount[currStr] = 
            // }
         }

         for(auto& ele:anagramCount){
            anagrams.push_back(ele.second);
         }

         return anagrams;
    }
};