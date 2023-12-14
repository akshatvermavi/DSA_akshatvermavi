#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        const int n=grid.size(), m=grid[0].size();
        int Row[n], Col[m];
        memset(Row, 0, n*sizeof(int));
        memset(Col, 0, m*sizeof(int));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int&& x=move(grid[i][j]);
                Row[i]+=x;
                Col[j]+=x;
            }
        }

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++){
                grid[i][j]=2*(Row[i]+Col[j])-(n+m);
            }
        return move(grid);
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
