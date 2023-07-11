class Solution {

    void bfs(map<pair<int, int>,bool>&visited,int row, int col, vector<vector<char>>& grid){
        queue<pair<int, int>>q;
        q.push({row,col});
        visited[{row, col}]=true;
        while(!q.empty()){
            pair<int, int> fNode = q.front();
            q.pop();
            int x = fNode.first;
            int y = fNode.second;
            int dx[] = {-1,0,1,0};
            int dy[] = {0,1,0,-1};
            for(int i=0;i<4;i++)
            {
                int newx = x+dx[i];
                int newy = y+dy[i];
                if(newx >=0 && newx<grid.size() && newy>=0 && newy<grid[0].size()&& !visited[{newx, newy}] && grid[newx][newy] =='1'){
                   q.push({newx, newy});
                   visited[{newx,newy}]=true;
                }
            }
        }
    }
public: 
    int numIslands(vector<vector<char>>& grid) {
        //int n = grid.size();
        // no of island kitne hai?
        //solve using adjcency list 
        // bfs se kro
        // queue<int, int>q;
        map<pair<int, int>, bool>visited;
        int count =0;
        for(int row= 0;row<grid.size();row++)
        {
            int n = grid[row].size();
            for(int col =0;col<n;col++)
            {
                if(!visited[{row,col}] && grid[row][col]=='1'){
                bfs(visited, row,col, grid);
                count++;
                }
            }

        }
        return count;
    }
};
