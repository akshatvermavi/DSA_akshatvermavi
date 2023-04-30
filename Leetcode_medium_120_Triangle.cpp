// class Solution {
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
    //     sort(triangle.begin(),triangle.end());
    //     int sum=0;
    //     for(int i=0;i<triangle.size();i++)
    //    {
    //            vector<int>vrr;
               
               
    //    } 
    //    for(int i=0;i<triangle.size();i++)
    //    {
    //            int vrr[i][0];
    //            for(int j=0;j<i;j++)
    //            vrr[j][0]==triangle[j][0];
    //            sort(vrr.begin(),vrr.end());
    //            sum+=vrr[i][0];
    //    } 
    //    return sum;
  //  }
//};

// class Solution {
// public:
//     int f(int i, int j,vector<vector<int>>& triangle, int n )
//     int minimumTotal(vector<vector<int>>& triangle) {
        

//     }
// };
// visit once more
// class Solution {
// public:
//     int solve(int i, int j, vector<vector<int>>& triangle, int n) {
//         if (i == n-1)
//             return triangle[i][j];
//         int down = triangle[i][j] + solve(i+1, j, triangle, n);
//         int diagonal = triangle[i][j] + solve(i+1, j+1, triangle, n);
//         return min (down, diagonal);     
//     }
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int n = triangle.size();
//         return solve(0, 0, triangle, n);
//     }
// };


class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        vector<vector<int>>dp;
        dp.push_back({t[0][0]});
        if(t.size()==1)
        return t[0][0];
        int mn=INT_MAX;
        for(int i=1;i<t.size();i++){
            vector<int>d;
            for(int j=0;j<t[i].size();j++){
                int g=t[i][j];
                if(j==0)g+=dp[i-1][j];
                else if(j==t[i].size()-1)g+=dp[i-1][j-1];
                else {
                    g += min(dp[i-1][j-1],dp[i-1][j]);
                }
                if(i==t.size()-1)mn=min(mn,g);
                d.push_back(g);
            }
            dp.push_back(d);
        }
         return mn;
    }
};

