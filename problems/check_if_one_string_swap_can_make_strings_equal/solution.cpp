class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size();
        
        int i1=-1, count=0;
        for(int i=0; i<n; i++)
        {
            if(s1[i]!=s2[i])
            {
                if(count==2)
                    return false;
                count++;
                if(i1==-1)
                    i1=i;
                else
                {
                    if(!(s1[i1]==s2[i] && s1[i]==s2[i1]))
                        return false;
                }
            }
        }
        if(count==1)
            return false;
        
        return true;
    }
};