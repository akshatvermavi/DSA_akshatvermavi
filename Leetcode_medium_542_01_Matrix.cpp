// class Solution {
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int x = mat.size();
//         int y =mat[0].size();
//         for(int i=0;i<x;i++)
//         {
//             for(int j=0;j<y;j++)
//             {
//                 if(mat[i][j]==1 &&i+1<x && j+1<y && i-1>=0 && j-1>=0 && mat[i+1][j]==1 && mat[i-1][j]==1 && mat[i][j+1]==1 &&mat[i][j-1]==1)
//                 {
//                     mat[i][j]=mat[i][j]+1;
//                 }
//             }
//         }
//         return mat;
//     }
// };


class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int a = mat.size();
        int b =mat[0].size();
        if(a==0 ||b==0)
            return {};
        queue<pair<int, int>>q;
        int maxi = INT_MAX;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(mat[i][j]==0)
                    q.push({i,j});
                else
                    mat[i][j]=maxi;
            }
        }
        vector<pair<int, int>>dir ={{1,0}, {-1,0}, {0,1},{0,-1}};
        while(!q.empty())
        {
            auto [row,col] = q.front();
            q.pop();
            for(auto [dr,dc]:dir){
            int r = row + dr,  c = col + dc;
            if(r>=0 && r<a &&c>=0 && c<b && mat[r][c]>mat[row][col] + 1)
            {
                q.push({r,c});
                mat[r][c]=mat[row][col] +1;
            }
            }
        }
        return mat;
        
    }
};
