class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
       
        vector<vector<int>> res;
        map<string,int> mp;
        for(int i=0;i<row;i++){
            string str="";
            vector<int> vc;
            for(int j=0;j<col;j++){
                vc.push_back(M[i][j]);
                str+= to_string(M[i][j]);
            }
            if(mp.find(str)==mp.end()){
                mp[str]++;
                res.push_back(vc);
            }
        }
        return res;
    }
};
