// class Solution {
// public:

//       void dfs(int s, int n, vector<vector<int>>& isConnected, vector<bool>&visited){
//         visited[s] = true;
        
        
//         vector<int>adj;
//         for(int i=0; i<n; i++ ){
//             int x =  isConnected[s][i];  // x = connection
//             if(x == 1)
//                 adj.push_back(i);
//         }
        
//         for(auto x: adj){
//             if(!visited[x]){
//                 dfs(x, n, isConnected, visited);
//             }
//         }
        
//       }    
//     int findCircleNum(vector<vector<int>>& isConnected) {
        
//         int n=isConnected.size();
//          vector<bool> visited(n,0);
//          int ans=0;

//          for(int i=0;i<isConnected.size();i++){
//              if(!visited[i]){
//                  ans++;
//                  dfs(i,n,isConnected,visited);
//              }
//          }
       
//         return ans;
//     }
// };

class Solution {
public:
    void dfs( unordered_map<int, bool>&vis, int src,vector<vector<int>>& isConnected ){
        vis[src] = true;
        //row = srd;
        // col= we will write a loop
        int size = isConnected[src].size();
        for(int col=0;col<size;col++){
            if(src!=col && isConnected[src][col] ==1){
                if(!vis[col])//agar visited nahi hai tho fnn call kr diya
                dfs(vis,col,isConnected); 

            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        //provence  -> component
        //given adjmtx
        //total no. of components?
        //mtx se kro bina list banaye 
        unordered_map<int, bool>visited;
        int count=0;
        int n = isConnected.size();
        for(int i=1;i<=n;i++){
            if(!visited[i-1]){
                //cout<<"calling for src : "<<i<<endl;
                dfs(visited, i-1, isConnected);
                count++;
            }
        }


    return count;
    }
};
