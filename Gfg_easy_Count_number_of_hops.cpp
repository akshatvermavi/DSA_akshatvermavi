class Solution
{
    //long long mod = 1000000007;
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        // if(n==0 || n==1) return 1;
        // if(n==2) return 2;
        // if(n==3) return 3;
        // long long ans = countWays(n) + countWays(n-2) + countWays(n-3);
        // return ans%mod;
        int mod = 1e9 +7;
        vector<long long>dp(n+1);
        dp[0]=1;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            dp[i] = (dp[i-1]%mod +dp[i-2]%mod + dp[i-3]%mod);
        }
        return dp[n]%mod;
    }
};
