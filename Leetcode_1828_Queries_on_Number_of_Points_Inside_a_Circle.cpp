class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        // look once more mmethod= 01
        // vector<int>vrr;
        // int q = queries.size();
        // int p = points.size();
        // int count =0;
        // int flag =0;
        // for(int i=0;i<q;i++)
        // {
        //     for(int j=0;j<p;j++)
        //     {
        //         int x = (queries[i][0] - points[j][0]);
        //         int y = (queries[i][1] - points[j][1]);
        //         int t = pow(x,2) + pow(y,2);
        //         int r1 = pow(t,0.5);
        //         int r = queries[i][2];
        //         if(r<=r1)
        //         {
        //             count++;
        //         }
        //         if(j==q-1)
        //         {
        //             //vrr.push_back(count);
        //             flag =1;
        //         }
        //     }
        //     if(flag ==1)
        //     {
        //         vrr.push_back(count);
        //         count=0;
        //         flag =0;
 
        //     }
        // }
        // return vrr;


          vector<int> res;
    for (auto &q : queries) {
        int cnt = 0, rr = q[2] * q[2];
        for (auto &p : points)
            cnt += (q[0] - p[0]) * (q[0] - p[0]) + (q[1] - p[1]) * (q[1] - p[1]) <= rr;
        res.push_back(cnt);
    }
    return res;
    }
};
