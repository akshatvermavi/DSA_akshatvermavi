// class Solution {
// public:
//   bool f(vector<int> nums)
//   {
//     int flag =0;
//     for(int i=0;i<nums.size();i++)
//     {
//       if(nums[i]==1)
//       flag =1;
//     }
//     if(flag==1)
//     return 1;
//     else return 0;
//   }
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//       int maxi =-1;
//       int count=1;
//       for(int i=0;i<nums.size();i++)
//       {
//           if(f(nums)) return 0;
//           if(nums[i]==1 && nums[i+1]==1 && i+1<nums.size())
//           count++;
//           if(count>maxi)
//           maxi = count;
          
//       } 
//       return maxi; 
//     }
// };

class Solution {
public:
  // ek baar or dekhna ishe
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int maxLen=0;
        int n=nums.size();

        while(i<n){
            if(nums[i]==1){
                int len=0;
                while(i<n&&nums[i]==1){
                    len++;
                    i++;
                }
                maxLen=max(maxLen, len);
            }
            else i++;
        }
        return maxLen;
    }
};
