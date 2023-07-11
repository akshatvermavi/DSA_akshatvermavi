class Solution {
    private:
    void dfs(int x, int y, int oldColor, int newColor, map<pair<int,int>, bool>& vis,vector<vector<int> >& arr ) {

        vis[{x,y}] = true;
        arr[x][y] = newColor;

        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};
        for(int i=0; i<4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if(newX>=0 && newX<arr.size() && newY>=0 && newY<arr[0].size()&&
                !vis[{newX, newY}]  && arr[newX][newY]==oldColor) {
                    dfs(newX, newY, oldColor, newColor, vis, arr);   
                }
        }
    }
public:

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int oldColor = image[sr][sc];
        map<pair<int,int>, bool> vis;
        vector<vector<int>> ans = image;
        dfs(sr,sc,oldColor,color,vis,ans);
        return ans;
    }
};

// class Solution {
// private:
//     void dfs(int x, int y, int oldcolor, int newcolor,  map<pair<int, int>, bool>& vis, vector<vector<int>>& arr){
//         vis[{x,y}] = true;
//         arr[x][y] = newcolor;
//         int dx[] = {-1,0, 1,0};
//         int dy[] = {0,1,0,-1};
//         for(int i=0;i<4;i++)
//         {
//             int newx = x + dx[i];
//             int newy = y + dx[i];
//             if(newx>=0 && newx<arr.size() && newy>=0 && newy<arr[0].size() && !vis[{newx, newy}] && arr[newx][newy]==oldcolor){
//                 dfs(newx, newy, oldcolor, newcolor, vis, arr);
//             }  
//         }
        
//     }
//     public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int oldcolor  =  image[sr][sc];
//         map<pair<int, int>, bool> vis;
//         vector<vector<int>> ans = image;
//         dfs(sr,sc, oldcolor,color, vis, image);
//         return ans;
//     }
// };
