class Solution {
public:
vector<int> generaterow(int row)
    {
        long long ans =1;
        vector<int>vrr;
        vrr.push_back(1);
        for(int col=1;col<row;col++)
        {
            ans = ans*(row-col);
            ans = ans/(col);
            vrr.push_back(ans);
        }
        return vrr;
    }
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>pascle;
         int n =numRows;
         for(int i=1;i<=n;i++)
         {
             pascle.push_back(generaterow(i));
         }
         return pascle;
       
    }
};
