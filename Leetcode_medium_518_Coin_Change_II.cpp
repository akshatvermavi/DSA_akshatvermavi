class Solution {
public:
    int change(int sum, vector<int>& coins) {
      // int n = coins.size();
      // vector<long long> dp(amount+1,0);
      // dp[0]=1;
      // for(int i=0;i<n;i++)
      // {
      //     for(int j=coins[i];j<=amount;j++)
      //     dp[j] = dp[amount- coins[i]];
      // }  
      // return dp[amount];
      vector<long long>dp(sum+1,0);
        dp[0]=1;
        int N = coins.size();
        for(int i=0;i<N;i++)
        {
            for(int j=coins[i];j<=sum;++j)
            {
                dp[j]+=dp[j-coins[i]];
            }
        }
        return dp[sum];
    }
};
