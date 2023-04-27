// class Solution {
// public:
//     int uniquePaths(int m, int n) {
        
//     }
// };

// class Solution {
// public:
//     int uniquePaths(int m, int n, int i = 0, int j = 0) {
//         if(i >= m || j >= n) return 0;                                    // reached out of bounds - invalid
//         if(i == m-1 && j == n-1) return 1;                                // reached the destination - valid solution
//         return uniquePaths(m, n, i+1, j) + uniquePaths(m, n, i, j+1);     // try both down and right
//     }
// };

class Solution {
public:
   
    int path(int x, int y, int m, int n, vector<vector<int>> &dp){
        if(x == m-1 && y == n-1){
            return 1;
        }
        if(x >= m || y >= n){
            return 0;
        }
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        else
        return dp[x][y] = path(x+1, y, m, n, dp) + path(x, y+1, m, n, dp);
        
    }

    int uniquePaths(int m, int n) {
     vector<vector<int>> dp(m, vector<int>(n, -1));
    return path(0, 0, m, n, dp);
        
    }
};

