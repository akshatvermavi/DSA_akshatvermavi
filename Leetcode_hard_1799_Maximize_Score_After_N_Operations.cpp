// class Solution {
// public:
//     int maxScore(vector<int>& nums) {
//         int sum=0;
//         int n = nums.size();
//         vector<int> dp(n, -1);
//         sort(nums.begin(),nums.end());
//       for(int i=0;i<nums.size();i++)
//       {
//         if(dp[i]!=-1) return dp[i];
//         for(int j=i+1;j<nums.size();j++){
//             if(nums[j]%nums[i]==0){
//         int x = gcd(nums[j],nums[i]);
//         int y = (i+1 * x);
//         sum+=y;

//             }
//         } 
//        return dp[n]=sum;
//       }
//      return sum;
//     }
// };

// phir se re visit kro chap diya hun vro
class Solution {
public:
    int func(vector<int>& nums, int op, int mask, vector<int>& dp, vector<vector<int>>& gcd){
        int m = nums.size(), n = nums.size()/2;
        if(op > n) return 0;
        if(dp[mask] != -1) return dp[mask];

        for(int i=0;i<m;i++){
            if( (mask & (1<<i)) ) continue;
            for(int j=i+1;j<m;j++){
                if( (mask & (1<<j)) ) continue;
                
                int newMask = (1<<i) | (1<<j) | mask;
                int score = op * gcd[i][j] + func(nums, op+1, newMask, dp, gcd);
                dp[mask] = max(dp[mask], score);
            }
        }
        return dp[mask];
    }

    int maxScore(vector<int>& nums) {
        vector<int> dp(1<<14, -1);

        int m = nums.size(), n = nums.size()/2;
        vector<vector<int>> gcd(m, vector<int>(m, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                gcd[i][j] = __gcd(nums[i], nums[j]);
            }
        }

        return func(nums, 1, 0, dp, gcd);
    }
};
