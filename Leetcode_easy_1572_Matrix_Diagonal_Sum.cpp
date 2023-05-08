class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
     int n =  mat.size();
     int sum =0;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
            if(i + j == n-1)
            sum+= mat[i][j];
            if(i==j)
            sum+=mat[i][j];
            
         }
     }   
     if(n%2 ==0)
     return sum;
     else 
     return sum = sum - mat[n/2][n/2];
    }
};
