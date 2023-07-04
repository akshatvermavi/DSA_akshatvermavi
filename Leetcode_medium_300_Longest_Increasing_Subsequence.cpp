// class Solution {
// public:
//     int solveusingrr(vector<int>& nums, int curr, int prev)
//     {
//         if(curr>=nums.size())
//         {
//             return 0;
//         }
//         int include =0;
//         if(prev ==-1 || nums[curr]>nums[prev])
//         {
//             include = 1 + solveusingrr(nums, curr+1, curr);

//         }
//         int exclude = solveusingrr(nums, curr+1, prev);
//         return max(include, exclude);

//     }
//     int lengthOfLIS(vector<int>& nums) {
//         int curr =0;
//         int prev =-1;
//         return solveusingrr(nums,curr,prev);
//     }
// };

// class Solution {
// public:
//     int solveUsingMem(vector<int>& arr, int curr, int prev, vector<vector<int> >& dp) {
//         if(curr >= arr.size()) {
//             return 0;
//         }

//         if(dp[curr][prev + 1] != -1)
//             return dp[curr][prev+1];

//         //include
//         int include = 0;
//         if(prev == -1 || arr[curr] > arr[prev])
//             include = 1 + solveUsingMem(arr, curr+1, curr, dp);

//         //excude
//         int exclude = 0 + solveUsingMem(arr, curr+1, prev, dp);

//         dp[curr][prev + 1] = max(include, exclude);
//         return dp[curr][prev + 1];

//     }
//     int lengthOfLIS(vector<int>& nums) {
//         int curr =0;
//         int prev =-1;
//         int n = nums.size();
//         vector<vector<int>>dp(n,vector<int>(n+1,-1));
//         return solveUsingMem(nums,curr,prev,dp);
//     }
// };


class Solution {
public:
    int solveUsingTab(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int> > dp(n+1, vector<int>(n+1, 0));

        for(int curr = n-1; curr>=0; curr--) {
            for(int prev = curr - 1; prev >= -1; prev--) {
                //include
                int include = 0;
                if(prev == -1 || arr[curr] > arr[prev])
                    include = 1 + dp[curr+1][curr + 1];

                //excude
                int exclude = 0 + dp[curr+1][prev + 1];

                dp[curr][prev + 1] = max(include, exclude);   
            }
        }
        return dp[0][0];
    }
    int lengthOfLIS(vector<int>& nums) {
        int curr =0;
        int prev =-1;
        int n = nums.size();
        return solveUsingTab(nums);
    }
};
