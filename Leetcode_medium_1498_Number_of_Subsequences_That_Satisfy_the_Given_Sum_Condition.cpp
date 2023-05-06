// class Solution {
// public:
//     int numSubseq(vector<int>& nums, int target) {
//       int count =0, sum =0;
//       sort(nums.begin(),nums.end());
//       int s= 0, e = nums.size();
//       while(s<e)
//       {
//           for(int i=s;i<e;i++)
//           {
//               sum += nums[i];
//           }
//           if(sum<=target)
//           {
//               count++;
//               s++;
//               e--;
//           }
//           else
//           {
//               s++;
//               e--;
//           }
//       }  
//       return count;
//     }
// };

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = 0, n = nums.size(), l = 0, r = n - 1, mod = 1e9 + 7;
        vector<int> pows(n, 1);
        for (int i = 1 ; i < n ; ++i)
            pows[i] = pows[i - 1] * 2 % mod;
        while (l <= r) {
            if (nums[l] + nums[r] > target) {
                r--;
            } else {
                res = (res + pows[r - l++]) % mod;
            }
        }
        return res;
    }
};
