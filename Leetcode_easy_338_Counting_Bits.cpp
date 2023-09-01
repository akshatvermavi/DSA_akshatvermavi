class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini = INT_MAX;
       int sum =0;
       int maxi =0;
       int n = prices.size();
       for(int i=0;i<n;i++)
       {
           mini = min(mini,prices[i]);
           if(i+1<n && i-1>=0 && prices[i]>prices[i-1] && prices[i]>=prices[i+1]){
           maxi = max(maxi, prices[i] - mini);
           sum+=maxi;
           maxi=0;
           }

       } 
       return sum;
    }
};
