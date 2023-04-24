class Solution {
public:
    int numRollsToTarget(int N, int K, int T) {

        const int MOD = 1e9 + 7;
        int dp[N+1][T+1];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;

        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= T; j++){
                for(int cur_face = 1; cur_face <= K; cur_face++){
                    if(cur_face <= j){
                        dp[i][j] = (dp[i][j] % MOD + dp[i-1][j-cur_face] % MOD) % MOD;
                    }
                }
            }
        }

        return dp[N][T];
    }
};
