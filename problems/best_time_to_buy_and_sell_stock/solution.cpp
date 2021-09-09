class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minPrice= INT_MAX;
        int profitMax= 0;
        int Difference;
        for(int i=0; i<n;i++){
            if(prices[i]<minPrice)
                minPrice=prices[i];
            // else
            //     continue;
            Difference=prices[i]-minPrice;
            if(profitMax<Difference)
                profitMax=Difference;
            else
                continue;
        }
        return profitMax;
        
    }
};