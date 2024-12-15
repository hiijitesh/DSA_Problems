class Solution {
public:
    bool hasAllCodes(string s, int k) {

        if(s.size() < k)
            return false;

        unordered_set<string>st;

        for(int i = 0; i < s.size(); i++){
            string currStr = s.substr(i, k);
            // cout<<"SubString: "<<currStr<<" "<<endl;
            if(st.find(currStr) == st.end()){
                if(currStr.size()==k){
                 st.insert(currStr);

                }
            }
        }
        return st.size() == pow(2,k);
    }
};