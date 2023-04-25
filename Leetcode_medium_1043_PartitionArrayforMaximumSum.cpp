// class Solution {
// public:
//     int f(int ind, vector<int> &num, int k, vector<int> &dp)
//     {
//         int n= num.size();
//         if(ind==0) return 0;
//         if(dp[ind]!=-1) return dp[ind];
//         int len =0;
//         int maxi = INT_MIN;
//         int maxans = INT_MIN;
//         for(int j=ind;j<min(ind +k, n);j++)
//         {
//             len++;
//             maxi = max(maxi, num[j]);
//             int sum = len* maxi + f(j+1, num, k, dp);
//             maxans = max(maxans, sum);
//         }
//         return dp[ind] = maxans;

//     }
//     int maxSumAfterPartitioning(vector<int>& num, int k) {
//       int n = num.size();
//       vector<int> dp(n, -1);
//       return f(0, num, k,dp);  
//     }
// };

class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        int dp[n];
        int maxOfThree = arr[0];

        for(int i = 0; i < k; i++)
        {
            maxOfThree = max(arr[i], maxOfThree);
            dp[i] = (maxOfThree*(i+1));
        }
        for(int i = k; i < n; i++)
        {
            maxOfThree = arr[i];
            dp[i] = maxOfThree + dp[i-1];

            for(int j = i-1; j > i-k; j--)
            {
                maxOfThree = max(maxOfThree,arr[j]); 
                dp[i] = max(dp[i], dp[j-1] + (i-j+1)*maxOfThree);
            }
        }
        return dp[n-1];
    }
};
