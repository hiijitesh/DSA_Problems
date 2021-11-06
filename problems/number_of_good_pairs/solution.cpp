class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> m;
        int sum=0;
        for(auto i:nums) m[i]++;
        for(auto i:m){
            int num=i.second;
            if(num>1) sum=sum+(num*(num-1))/2;
        }
        return sum;
    }
};