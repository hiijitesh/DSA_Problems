class Solution {
    public int maxProfit(int[] prices) {
        return maximumProfit(prices,true,0,new HashMap<String,Integer>());
    }
    
    private int maximumProfit(int[] prices,boolean canBuy,int currentIndex, HashMap<String, Integer> memo){
        if(currentIndex == prices.length )
            return 0;
        
        String key = currentIndex+"-"+canBuy;
        if(memo.containsKey(key))
            return memo.get(key);
        
        int idle = maximumProfit(prices,canBuy,currentIndex+1,memo);
        if(canBuy){
            int buy = -prices[currentIndex] +  maximumProfit(prices,false,currentIndex+1,memo);
            memo.put(key,Math.max(idle,buy));
            return memo.get(key);
        } else {
            int sell = prices[currentIndex] + maximumProfit(prices,true,currentIndex+1,memo);
            memo.put(key,Math.max(idle,sell));
            return memo.get(key);
        }
        
        
    }
}