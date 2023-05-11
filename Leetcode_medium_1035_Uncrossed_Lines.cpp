// class Solution {
// public:
//     int f(int i, int j, vector<int>& nums1, vector<int>& nums2)
//     {
      
//         if(i==nums1.size() || j==nums2.size())return 0;
//           int count =0;
//         if(nums1[i] ==nums2[j])
//         {
//             count = 1 + f(i+1,j+1,nums1, nums2);
//         }
//         else
//         {
//             count += max(f(i+1,j,nums1,nums2), f(i,j+1,nums1,nums2));
//         }
//         return count;
//     }
//     int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
//        return f(0, 0,nums1,nums2); 
//     }
// };

class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        if (m < n) {
            swap(nums1, nums2);
            swap(m, n);
        }
        vector<int> dp(n + 1);
        for (int i = 1; i <= m; i++) {
            int prev = 0;
            for (int j = 1; j <= n; j++) {
                int curr = dp[j];
                if (nums1[i-1] == nums2[j-1]) {
                    dp[j] = prev + 1;
                } else {
                    dp[j] = max(dp[j-1], curr);
                }
                prev = curr;
            }
        }
        return dp[n];
    }
};
