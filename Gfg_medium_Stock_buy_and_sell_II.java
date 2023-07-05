class Solution {
    public static int stockBuyAndSell(int n, int[] prices) {
        // code here
         int x = n-1;
        int y = n-1;
        int max = 0;
        for(int i =n-1; i>0; i--){
            if(prices[i]<prices[i-1]){
                y=i;
                max+= prices[x]-prices[y];
                x=y-1;
            }
            if(i==1){
                y=0;
                max+= prices[x]-prices[y];
            }
        }
        return max;
    }
}
