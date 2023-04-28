// class Solution {
// public:
// int f(int day, int last, vector<vector<int>> &points, vector<vector<int>>& dp)
// {
//     if(day==0)
//     {
//         int maxi = 0;
//         for(int task = 0;task<3;task++)
//         {
//             if(task!=last)
//             {
//                 maxi = max(maxi, points[0][task]);
//             }
//         }
//            return maxi;
//     }
//   if(dp[day][last]!=-1) return dp[day][last];
//   int maxi =0;
//   for(int task =0;task<3;task++)
//   {
//       if(task !=last)
//       {
//           int point = points[day][task] + f(day-1,task,points,dp);
//           maxi = max(maxi, point);
//       }
//   }
//   return dp[day][last]=maxi;
// }
//     int cherryPickup(vector<vector<int>>& grid) {
//         int n =grid.size();
//         vector<vector<int>>dp(n,vector<int>(n, -1));
//         return f(n-1,3, grid,dp);
//     }
// };

// class Solution {
// public:
//     int memo[70][70][70];
//     int n, m;
//     int cherryPickup(vector<vector<int>>& A) {
//         n = A.size(), m = A[0].size();
//         for(int i = 0; i < 70; i++)
//             for(int j = 0; j < 70; j++)
//                 for(int k = 0; k < 70; k++)
//                     memo[i][j][k] = -1;
//         return max(0,dp(A, 0, 0, m - 1));
//     }
//     int dp(vector<vector<int>>& A, int r, int c1, int c2){
//         if(c1 < 0 || c1 == m || c2 < 0 || c2 == m)
//             return -1e9;
//         if(r == n)
//             return 0;
//         if(memo[r][c1][c2] != -1)
//             return memo[r][c1][c2];
//         int best = 0;
//         for(int i = -1; i <= 1; i++)
//             for(int j = -1; j <= 1; j++)
//                 best = max(best, dp(A, r + 1, c1 + i, c2 + j));
//         return memo[r][c1][c2] = best + (c1 == c2 ? A[r][c1] : A[r][c1] + A[r][c2]);
//     }
// };

class Solution {
public:
int f(int i,int j1,int j2, vector<vector<int>>& grid,vector<vector<vector<int>>>&dp){
        int n=grid.size();
        int m=grid[0].size();
        if(j1<0 || j1>=m || j2<0 || j2>=m)
            return -1e8;
            
        if(i==n-1){
            if(j1==j2)
                return grid[i][j1];
            else
                return grid[i][j1]+grid[i][j2];
        }
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int maxi=0;
        for(int d1=-1;d1<=1;d1++){
            for(int d2=-1;d2<=1;d2++){
                // int x;
                if(j1==j2)
                    maxi=max(maxi,(grid[i][j1]+f(i+1,j1+d1,j2+d2,grid,dp)));
                else
                    maxi=max(maxi,(grid[i][j1]+grid[i][j2]+f(i+1,j1+d1,j2+d2,grid,dp)));
            }
        }
        return dp[i][j1][j2]= maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,0)));
        for(int j1=0;j1<m;j1++){
            for(int j2=0;j2<m;j2++){
                if(j1==j2) dp[n-1][j1][j2]=grid[n-1][j1];
                else dp[n-1][j1][j2]=grid[n-1][j1]+grid[n-1][j2];
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j1=0;j1<m;j1++){
            for(int j2=0;j2<m;j2++){
               int maxi=INT_MIN;
        for(int d1=-1;d1<=1;d1++){
            for(int d2=-1;d2<=1;d2++){
                // int x;
                int ans;
                if(j1==j2)
                    ans=grid[i][j1];
                else
                    ans=grid[i][j1]+grid[i][j2];
                if(j1+d1<0 || j2+d2<0 || j1+d1>=m ||j2+d2>=m)
                    ans+=-1e9;
                else
                ans+=dp[i+1][j1+d1][j2+d2];
                maxi=max(maxi,ans);
            }
        }
        dp[i][j1][j2]= maxi;

            }
        }
        }
        return dp[0][0][m-1];
    }
};
