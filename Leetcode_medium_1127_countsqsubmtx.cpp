// Method 01 using dp array TC=O(n^2) SC = O(n^2)
class Solution {
public:
    int countSquares(vector<vector<int>>& arr) {
        int m= arr.size();
        int n = arr[0].size();
        vector<vector<int>> dp(n , vector<int>(m,0));
        for(int j=0;j<m;j++) dp[0][j]  = arr[0][j];
        for(int i=0;i<n;i++ ) dp[i][0] = arr[i][0];
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr[i][j]===) dp[i][j]=0;
                 else
                dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));

            }
        }
        int sum=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum += dp[i][j];
            }
        }
        return sum;
    } 
};


//Method 02 by array updation  TC = O(n^2) Sc= O(1)

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),sum=0;
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                
                    if(matrix[i][j]==1)
                    matrix[i][j]=min(matrix[i-1][j-1],min(matrix[i][j-1],matrix[i-1][j]))+1;
                
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum+=matrix[i][j];
            }
        }
        return sum;
    }
};
