// class Solution {
// public:
// int f(int x, int y, int m ,int n, vector<vector<int>> &dp)
// {
//     if(x >= m || y >= n && dp[x][y]==-1)
//     return 0;
//     if(x==m-1 && y==n-1)
//     return 1;

//     if(x >= m || y >= n)
//     return 0;

//     if(dp[x][y] != -1)
//     return dp[x][y];

//     else
//     return dp[x][y] = f(x+1,y,m,n,dp) + f(x,y+1,m,n,dp);

// }
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size();
//         int n = obstacleGrid[0].size();
//         vector<vector<int>> dp(m, vector<int>(n,-1));
//         return f(0,0,m,n,dp);
//     }
// };

class Solution {
public:
     int ans(int i, int j, vector<vector<int>> &dp, vector<vector<int>>& obstacleGrid){
        if(i>=0 && j>=0 && obstacleGrid[i][j]==1) return 0;
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=ans(i-1, j, dp, obstacleGrid);
        int left=ans(i, j-1, dp, obstacleGrid);
        return dp[i][j]=left+up;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return ans(m-1, n-1, dp, obstacleGrid);

    }
};
