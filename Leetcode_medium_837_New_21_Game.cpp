class Solution {
public:
    double new21Game(int n, int k, int maxPt) {
      //phir se kro

           if (k == 0 || n >= k + maxPt) {
            return 1.0;
        }
        vector<double> dp(n + 1);
        double currSum = 1.0;
        double ans = 0.0;

         dp[0] = 1.0;

        for (int i = 1; i < n+1; i++) {

            dp[i] = currSum / maxPt;

            if (i < k) 
                currSum += dp[i];

             else 
                ans += dp[i];
            
            if (i - maxPt >= 0) 
                currSum -= dp[i - maxPt];
            
        }

        return ans;
    }
};
