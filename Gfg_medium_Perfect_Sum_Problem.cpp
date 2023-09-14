class Solution{
    private:
    bool summ(vector<int>&vrr, int m, int sum)
    {
        int sm =0;
        for(int i=0;i<m;i++)
        {
            sm+=vrr[i];
        }
        if(sm==sum) return 1;
        return 0;
        
    }
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        // int p = pow(2,n);
        // int count =0;
        // for(int i=0;i<p;i++)
        // {
        //     vector<int>vrr;
        //     for(int j=0;j<n;j++){
        //     if(1<<j & i)
        //     {
        //         vrr.push_back(arr[i]);
        //     }
        //     }
        // if(summ(vrr,vrr.size(),sum))
        //     count++;
        // }
        // return count;
        
        
           vector<vector<int>>dp(n+1 , vector<int>(sum + 1 , 0));
        dp[0][0] = 1;
        int mod = 1e9 + 7;
        for(int i=1; i<=n; i++){
            for(int j=0; j<=sum ; j++){
                int ans = dp[i-1][j];
                if(j - arr[i-1] >= 0)
                ans += dp[i-1][j - arr[i-1]];
                dp[i][j] = ans % mod;
            }
        }
        return dp[n][sum];
	}
	  
};
