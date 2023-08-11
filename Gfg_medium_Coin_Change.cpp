  long long int count(int coins[], int N, int sum) {

        // code here.
        // long long ct=0;
        // if(sum==0){
       
        //     return 0;
        // }
        // if(sum<0)
        //     return INT_MAX;
       
        // for(int i=0;i<N;i++)
        // {
        //     int ans = count(coins, N, sum-coins[i]);
        //     if(sum-coins[i]==0)
        //     ct++;
            
        // }
        // return ct;
        vector<long long>dp(sum+1,0);
        dp[0]=1;
        for(int i=0;i<N;i++)
        {
            for(int j=coins[i];j<=sum;++j)
            {
                dp[j]+=dp[j-coins[i]];
            }
        }
        return dp[sum];
    }
