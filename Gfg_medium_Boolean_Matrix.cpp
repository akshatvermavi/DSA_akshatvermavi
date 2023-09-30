class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>>vrr;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==1)vrr.push_back({i,j});
            }
        }
        for(auto it:vrr)
        {
            int x = it.first;
            int y = it.second;
            //col
            for(int i=0;i<n;i++)
            {
                matrix[i][y]=1;
            }
            //row
            for(int j=0;j<m;j++)
            {
                matrix[x][j]=1;
            }
        }
    }
};
