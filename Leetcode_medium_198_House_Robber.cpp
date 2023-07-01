// class Solution {
// public:
//     int rob(vector<int>& nums) {
//     //   int count1=0,count2=0;
//     //   vector<int> arr;
//     //   int n = nums.size();
//     //   for(int i=0;i<n;i+=2)
//     //   count1+=nums[i];
//     //   for(int i=1;i<n;i+=2)
//     //   count2+=nums[i]; 
//     //   int a = max(count1,count2);
//     // for(int i=0;i<)
//     //   return a; 
//          int pr1 = nums[0], pr2 = 0;
//         int n = nums.size();
       
//         for(int i = 1; i<n; i++){
//             int temp = pr2;
//             pr2 = max(pr1,pr2);
//             pr1 = nums[i] + temp;
//         }
        
//         return max(pr1, pr2);
//     }
// };

// class Solution {
// public:
//     int ans(vector<int>& nums, int n)
//     {
//         if(n<0)
//             return 0;
//         if(n==0)
//             return nums[0];
//         int include = ans(nums, n-2) +  nums[n];
//         int exclude = 0 + ans(nums, n-1);
//         int maxi = max(include, exclude);
//         return maxi;
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size()-1;
//         return ans(nums,n);

//     }
// };


// class Solution {
// public:
//     int ans(vector<int>& nums, int n, vector<int>& dp)
//     {
//         if(n<0)
//             return 0;
//         if(n==0)
//             return nums[0];
//         if(dp[n]!=-1)
//             return dp[n];
//         int include = ans(nums, n-2, dp) +  nums[n];
//         int exclude = 0 + ans(nums, n-1, dp);
//         int maxi = max(include, exclude);
//         dp[n] = maxi;
//         return maxi;
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size()-1;
//         vector<int>dp(n+1, -1);
//         return ans(nums,n, dp);

//     }
// };

// class Solution {
// public:
//     int ans(vector<int>& nums, int n, vector<int>& dp)
//     {
//         if(n<0)
//             return 0;
//         if(n==0)
//             return nums[0];
//         if(dp[n]!=-1)
//             return dp[n];
//         int include = ans(nums, n-2, dp) +  nums[n];
//         int exclude = 0 + ans(nums, n-1, dp);
//         int maxi = max(include, exclude);
//         dp[n] = maxi;
//         return maxi;
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size()-1;
//         vector<int>dp(n+1, -1);
//         return ans(nums,n, dp);

//     }
// };

// class Solution {
// public:
//     int ans(vector<int>& nums, int n)
//     {
//         vector<int>dp(n+1, 0);
//         dp[0] =nums[0];
//         int maxi =0;
//         for(int i=1;i<=n;i++)
//         {
//             int temp =0;
        
//             if(i-2>=0)
//                 temp = dp[i-2];
//             int include = temp +  nums[i];
//             int exclude = 0 + dp[i-1];
//             dp[i] = max(include, exclude);
            
//         }
        
//         return dp[n];
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size()-1;
       
//         return ans(nums,n);

//     }
// };

class Solution {
public:
    int ans(vector<int>& nums, int n)
    {
        int prev2 =0;
        int prev1 = nums[0];
        int curr =0;
        // vector<int>dp(n+1, 0);
        // dp[0] =nums[0];
        // int maxi =0;
        for(int i=1;i<=n;i++)
        {
            int temp =0;
        
            if(i-2>=0)
                temp = prev2;
            int include = temp +  nums[i];
            int exclude = 0 + prev1;
            curr = max(include, exclude);
            prev2  = prev1;
            prev1 = curr;             
            
        }
        
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
       
        return ans(nums,n);

    }
};
