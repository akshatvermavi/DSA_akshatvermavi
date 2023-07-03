// class Solution {
// public:
//     int solveusingrr(int start, int end)
//     {
//         if(start>=end)
//             return 0;
//         int ans = INT_MAX;
//         for(int i=start;i<=end;i++)
//         {
//             ans = min(ans , i+ max(solveusingrr(start,i-1),solveusingrr(i+1, end)));
//         }
//         return ans;
//     }
//     int getMoneyAmount(int n) {
//        int ans  = solveusingrr(1,n);
//        return ans; 
//     }
// };
// solve using memo
// class Solution {
// public:
//     int solveusingmemo(int start, int end, vector<vector<int>>& dp)
//     {
//         if(start>=end)
//             return 0;
//         int ans = INT_MAX;
//         if(dp[start][end]!=-1)
//             return dp[start][end];
//         for(int i=start;i<=end;i++)
//         {
//             ans = min(ans , i+ max(solveusingmemo(start,i-1,dp),solveusingmemo(i+1, end,dp)));
//         }
//         dp[start][end] = ans;
//         return dp[start][end];
//     }
//     int getMoneyAmount(int n) {
//        vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
//        int ans  = solveusingmemo(1,n, dp);

//        return ans; 
//     }
// };

// solve using tab
class Solution {
public:
    int solveusingtab(int n){
      
        vector<vector<int>> dp(n+2, vector<int>(n+2,0));
        for(int start =n;start>=1;start--)
        {
            for(int end = 1;end<=n;end++)
            {
                if(start>=end)
                    continue;
                else{
                    int ans  = INT_MAX;
                    for(int i=start;i<=end;i++)
                    {
                        ans = min(ans, i+max(dp[start][i-1], dp[i+1][end]));
                    }
                    dp[start][end] = ans;
                }
            }
        }
      return dp[1][n];
    }
    int getMoneyAmount(int n) {
      
       int ans  = solveusingtab(n);

       return ans; 
    }
};
