class Solution {
public:
    int kInversePairs(int n, int k) {
        int MOD = 1000000007;
        vector<int> dp(k + 1);
        dp[0] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                dp[j] = (dp[j] + dp[j - 1]) % MOD;
            }
            for (int j = k; j >= i; j--) {
                dp[j] = (dp[j] - dp[j - i] + MOD) % MOD;
            }
        }
        return dp[k];
    }
};
