// class Solution {
// public:
//     //revisit krna chap diye ho bass
//     bool search(vector<int>& nums, int target) {
//         int s=0, e=nums.size()-1 , mid = s + (e-s)/2;
//         while(s<=e)
//         {
//             if(target == nums[mid]) return true;
//             if((nums[mid] ==target) && (nums[e]==nums[mid])) {s++;
//             e--;
//             } 
//             else if(nums[s]<=nums[mid]){
//             if(target>=nums[mid] && nums[mid]>target) s = mid-1;
//             else s = mid+1;
//             }
//             else
//             {
//                 if((nums[mid] < target) && (nums[e]>= target))
//                     s = mid + 1;
//                 else
//                     e = mid - 1;
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    //revisit krna chap diye ho bass
    bool search(vector<int>& nums, int target) {
      for(int i = 0; i < nums.size(); i++)
        if(nums[i] == target) return true;
        return false;  
    }
};
