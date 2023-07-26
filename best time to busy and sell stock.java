class Solution {
    public int maxProfit(int[] prices) {
        int maxp=0,minp=prices[0];
        int buy=0;
        for(int i=0;i<prices.length;i++){
            if(prices[i]<minp){
                minp=prices[i];
                buy=i;
            }
            
        maxp=Math.max(maxp,prices[i]-minp);
        }
        return maxp;
    }
}
