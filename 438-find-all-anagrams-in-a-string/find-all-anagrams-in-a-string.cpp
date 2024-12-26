class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.size() < p.size())
            return {};

        vector<int> mp1(26,0), mp2(26,0);

        vector<int> ans;
        for(auto& x:p) mp1[x-'a']++;

        int rel = 0, k = p.size();


        for(int aq = 0; aq < s.size(); aq++){
            cout<<"AQ:=>"<<aq<<" "<<endl;
            char curr = s[aq];

            mp2[curr-'a']++;
            // int win = aq-rel+1;

            // cout<<"WIN:=>"<<win<<" "<<endl;

            if(aq-rel+1 > k){
                mp2[s[rel]-'a']--;
                rel++;
            }

             if(aq-rel+1 == k){
                if(mp1 == mp2){
                    ans.push_back(rel);     
                }
            }
           
            cout<<"REL:=>"<<rel<<" ";
        }
        return ans;
    }
};