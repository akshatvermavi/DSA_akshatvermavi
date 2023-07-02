// class Solution {
// public:
//     bool fnrr(vector<int>& nums, int index, int target)
//     {
//         int n  = nums.size();
//         if(index>=n)
//             return 0;
//         if(target<0)
//             return 0;
//         if(target ==0)
//             return 1;

        
//         int include= fnrr(nums,index+1, target-nums[index], dp);
//         int exclude= fnrr(nums,index+1, target, dp);
//         return (include||exclude);
//     }
//     bool canPartition(vector<int>& nums) {
//         int index =0;
//         int sum =0;
//         int n = nums.size();
//         for(int i=0;i<nums.size();i++)
//         {
//             sum+=nums[i];
//         }
//         int target = sum/2;
//         if(sum&1)
//             return false;
//         int ans = fnrr(nums, index,target);
//         return ans;
//     }
// };


// class Solution {
// public:
//     bool fnrr(vector<int>& nums, int index, int target, vector<vector<int>>& dp)
//     {
//         int n  = nums.size();
//         if(index>=n)
//             return 0;
//         if(target<0)
//             return 0;
//         if(target ==0)
//             return 1;

//         if(dp[index][target]!=-1)
//             return dp[index][target];
//         int include= fnrr(nums,index+1, target-nums[index], dp);
//         int exclude= fnrr(nums,index+1, target, dp);
//         dp[index][target]= (include||exclude);
//         return dp[index][target];
//     }
//     bool canPartition(vector<int>& nums) {
//         int index =0;
//         int sum =0;
//         int n = nums.size();
       
//         for(int i=0;i<nums.size();i++)
//         {
//             sum+=nums[i];
//         }
//         int target = sum/2;
//         if(sum&1)
//             return false;
//         vector<vector<int>>dp(n,vector<int>(target+1, -1));
//         int ans = fnrr(nums, index,target,dp);
//         return ans;
//     }
// };

// class Solution {
// public:
//     bool fnrr(vector<int>& nums, int target)
//     {
//          int n  = nums.size();
//         vector<vector<int>>dp(n+1,vector<int>(target+1, 0));
       
        
//         for(int i=0;i<n;i++)
//         {
//             dp[i][0] =1;
//         }
//         for(int index =n-1;index>=0;index-- )
//         {
//             for(int t =1;t<=target;t++)
//             {
//                 bool include =0;
//                 if(t-nums[index]>=0)
//                    include= dp[index+1][ t-nums[index]];
//                 bool exclude= dp[index+1][t];
//                 dp[index][t]= (include||exclude);
//             }
//         }

       
//         return dp[0][target];
//     }
//     bool canPartition(vector<int>& nums) {
//         int index =0;
//         int sum =0;
//         int n = nums.size();
       
//         for(int i=0;i<nums.size();i++)
//         {
//             sum+=nums[i];
//         }
//         int target = sum/2;
//         if(sum&1)
//             return false;
        
//         int ans = fnrr(nums,target);
//         return ans;
//     }
// };

class Solution {
public:
    bool fnrr(vector<int>& nums, int target)
    {
        int n  = nums.size();
        vector<int>curr(target+1, 0);
        vector<int>next(target+1, 0);
        
       curr[0] =1;
       next[0] = 1;
        for(int index =n-1;index>=0;index-- )
        {
            for(int t =1;t<=target;t++)
            {
                bool include =0;
                if(t-nums[index]>=0)
                   include= next[ t-nums[index]];
                bool exclude= next[t];
                curr[t]= (include||exclude);
            }
           next= curr ;
        }

       
        return curr[target];
    }
    bool canPartition(vector<int>& nums) {
        int index =0;
        int sum =0;
        int n = nums.size();
       
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int target = sum/2;
        if(sum&1)
            return false;
        
        int ans = fnrr(nums,target);
        return ans;
    }
};
