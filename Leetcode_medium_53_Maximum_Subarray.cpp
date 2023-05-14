// // class Solution {
// // public:
// //     int maxSubArray(vector<int>& nums) {
// //       int maxi =INT_MIN;
      
// //       for(int i=0;i<nums.size();i++)
// //       {
// //           for(int j=i;j<nums.size();j++)
// //           {
// //               int sum=0;
// //               for(int k=i;k<=j;k++)
// //               {
// //                   sum+=nums[k];
// //               }
// //               maxi = max(maxi, sum);
// //           }
// //       }  
// //       return maxi;
// //     }
// // };

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//       int maxi =INT_MIN;
      
//       for(int i=0;i<nums.size();i++)
//       {
//            int sum=0;
//           for(int j=i;j<nums.size();j++)
//           {
//             sum += nums[j];
//             maxi = max(maxi, sum);

//           }
//       }  
//       return maxi;
//     }
// };

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    long long maxi = LONG_MIN;
    long long sum =0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        if(sum > maxi)
        maxi =sum;

        if(sum<0)
        sum =0;
    }
    return maxi;
    }
};
