// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//      vector<int> vrr;
//      int prod =1;
//      for(int i =0;i<nums.size();i++)
//      {
//          for(int j=0;j<nums.size();j++)
//          {
//             if(i!=j)
//             {
//                 prod = prod * nums[j];
//             }
//             if(j==nums.size() -1)
//             vrr.push_back(prod);
//          }
//         prod =1;
//      }   
//      return vrr;
//     }
// };

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n = nums.size();
     vector<int> left(n);
     vector<int> right(n);
     vector<int> ans(n);
     left[0] =1;
     right[n-1] =1;
     for(int i=1;i<n;i++)
     {
         left[i] = left[i-1] * nums[i-1];
     }
     for(int i = n-2;i>=0;i--)
     {
         right[i] = right[i+1] *nums[i+1];
     }
     for(int i=0;i<nums.size();i++)
     {
         ans [i] = left[i] * right[i];
     }
     return ans;
    }
};
