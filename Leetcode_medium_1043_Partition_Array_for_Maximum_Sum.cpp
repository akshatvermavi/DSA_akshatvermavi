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
