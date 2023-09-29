class Solution {
  public:
     void solve(vector<vector<int>>&grid ,int i ,int j, int n ,int m,vector<vector<int>>&vis){
      
      //base
      if(grid[i][j]==0)
      return;
      
      //right 
      if(j+1 <m){
          if(grid[i][j+1] == 1 && vis[i][j+1]!=1){
              vis[i][j+1] = 1;
              solve(grid,i,j+1,n,m,vis);
          }
      }
      
      
      //down 
      if(i+1 < n){
      if(grid[i+1][j] == 1 && vis[i+1][j]!=1){
          vis[i+1][j] = 1;
          solve(grid,i+1,j,n,m,vis);
         }
      }
      
      //left 
      if(j-1 >=0){
          if(grid[i][j-1] == 1 && vis[i][j-1]!=1){
              vis[i][j-1] = 1;
              solve(grid,i,j-1,n,m,vis);
          }
      }
      
      //top
      if(i-1>=0){
          if(grid[i-1][j] == 1  && vis[i-1][j]!=1){
              vis[i-1][j] = 1;
              solve(grid,i-1,j,n,m,vis);
          }
      }
      
      grid[i][j] = 0;
      
      
  }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
              int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n ,vector<int> (m, 0));
    
    
     for(int i = 0;i<n;i++){
            for( int j = 0; j<m;j++){
              if(i == 0 || j == 0 || i == n-1 || j == m-1){
                  if(grid[i][j]==1){
                      vis[i][j]=1;
                      solve(grid,i,j,n,m,vis);
                  }
              }
            }
        }
        
        int count = 0;
        
          for(int i = 0;i<n;i++){
            for( int j = 0; j<m;j++){
             
                  if(grid[i][j]==1){
                     count++;
                  }
              
            }
        }
        return count;
    }
};
