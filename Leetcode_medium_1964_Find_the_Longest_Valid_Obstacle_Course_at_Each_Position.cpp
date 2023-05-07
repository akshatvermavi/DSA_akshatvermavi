class Solution {
public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> vrr(n);
//         for(int i=0;i<n;i++)
//         {
//             if(nums[0]>0)
//             {
//                 if(i%2==0 && nums[i]>0)
//                 vrr.push_back(nums[i]);
//                 else if(i%2==1 && nums[i]<0)
//                 vrr.push_back(nums[i]);
//             }
//             if(nums[0]<0)
//             {
//                 if(i%2==0 && nums[i]<0)
//                 vrr.push_back(nums[i]);
//                 else if(i%2==1 && nums[i]>0)
//                 vrr.push_back(nums[i]);
//             }
//         }
//         return vrr;
//     }
// };

vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int indexpos = 0, indexneg=1;
        for(auto num: nums){
            if(num>0){
                ans[indexpos] = num;
                indexpos+=2;
            }
            if(num<0){
                ans[indexneg] = num;
                indexneg += 2;
            }
        }
        return ans;
        
    }
};
