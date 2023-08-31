// class Solution {
// public:
//     int minTaps(int n, vector<int>& ranges) {
//         vector<pair<int,int>>vrr;
//         for(int i=0;i<=n;i++)
//         {
//             int fis = i - ranges[i];
//             int sec = i + ranges[i];
//             vrr.push_back({fis,sec});
//         }
//         int mini = INT_MAX;
//         int maxi = INT_MIN;
//         for(pair<int,int> it:vrr)
//         {
//             mini = min(mini,it.first);
//             maxi = max(maxi,it.second);
//         }
//         int count =0;
//          for(pair<int,int> it:vrr)
//         {
//            if(mini == it.first && maxi == it.second)
//             count++;
//         }
//         if(count >0)
//             return count;
//         return -1;
//     }
// };



class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int>dp(n+1,n+2);
        dp[0]=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=max(i-ranges[i] +1,0);j<=min(i+ranges[i],n);j++)
            {
                dp[j]=min(dp[j],dp[max(0,i-ranges[i])] +1);
            }
        }
       return dp[n]<n+2 ? dp[n] :-1;
    }
};
