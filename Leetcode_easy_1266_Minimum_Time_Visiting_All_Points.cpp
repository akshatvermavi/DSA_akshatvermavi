class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    //  int second =0;
    //  int x = points.size();
    //  int y = points[0].size();
    //  for(int i=0;i<x-1;i++)
    //  {
    //     for(int j=0;j<y-1;j++)
    //     {
    //         int a  =  abs(points[i+1][j] - points[i][j]);
    //         int b  =  abs(points[i][j+1] - points[i][j]);
    //         int c = max(a,b);
    //         second+=c;

    //     }
    //  }   
    // return second;

    int answer=0;
        for(int i=1;i<points.size();i++)
        {
            answer+=max(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1]));
        }
        return answer;
        
    }
};
