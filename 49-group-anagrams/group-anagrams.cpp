class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // first sort the current string, and put it as a key in map
        // then insert og str as value
        // eat ->sort-> aet(key). [eat] --->> val

        //at last push all the value of map into res vector


        vector<vector<string>> ans;
        map<string, vector<string>> mp;

        for(int i=0; i<strs.size(); i++){
            string currStr = strs[i];
            //sort the strs[i] so it will act as unique key of map
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(currStr);
        }

        for(auto ele:mp){
            ans.push_back(ele.second);
        }
        return ans;
        
    }
};