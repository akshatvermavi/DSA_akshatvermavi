class Solution {
public:
    int combinationSum4(vector<int>& nums, int tget) {
        vector<unsigned> dp(tget+1, 0);
        dp[0]=1;
        for(int i=1; i<=tget; i++){
            for (int x: nums){
                if (i>=x)
                    dp[i]+=dp[i-x];
            }
        }
        return dp[tget];  
    }
};
