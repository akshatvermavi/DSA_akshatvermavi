// bakwasss soch
// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//        if(nums.size()==0 || nums.size()==1)
//         return 0;
//         int count =0;
//         int flag =0;
//         for(int i=0;i<nums.size();i++)
//        {
//            if(nums[i]==1){
//            count++;
//            }
//        } 
//        for(int i=0;i<nums.size();i++)
//        {
//            if(nums[i]==0){
//            //count--;
//            flag =1;
//            break;
        
//            }
//        } 
//        if(flag==0)
//        {
//            count--;
//        }
//        return count;
//     }
// };

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        int left = 0;
        int zeros = 0;
        int ans = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] == 0) {
                zeros++;
            }
            while (zeros > 1) {
                if (nums[left] == 0) {
                    zeros--;
                }
                left++;
            }
            ans = max(ans, right - left + 1 - zeros);
        }
        return (ans == n) ? ans - 1 : ans;
    }
};
