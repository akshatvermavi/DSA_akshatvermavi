// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int sum =0, count =0;
//         for(int i=0;i<nums.size();i++)
//         {
//             sum+=nums[nums.size() -i -1];
//             count++;
//             if(sum==target){
//                 return count;
//             }
//         }
//         return 0;
//     }
// };



// class Solution {
// public:

//     int solveusingbackt(int target, vector<int>& nums, vector<int>& vrr, int index, int count,int maxi){
     
//         // base case
//         if(target ==0)
//         {
//             return maxi;
//         }
//         if(target<0)
//             return maxi;
         
//         for(int i=0;i<nums.size();i++){
//             target -= nums[i];
//             count++;
//             solveusingbackt(target - nums[i],nums, vrr, index, count, maxi);
//             target += nums[i];
//             maxi = max(count,maxi);
//         }
//         return 0;
//     }
//     int minSubArrayLen(int target, vector<int>& nums) {
//         vector<int>vrr;
//         int n  = nums.size();
//         int maxi = INT_MIN;
//         int count =0;
//         return solveusingbackt(target, nums, vrr, 0, count, maxi);

//     }
// };



class Solution {
public:
  void solveusingbackt(int target, vector<int>& nums,vector<int>& vrr,vector<vector<int>>& ans, int index )
    {
        if(target==0)
        {
            ans.push_back(vrr);
            return;
        }
        if(target<0)
            return;
        for(int i=index;i<nums.size();i++){
            // if(i>index && nums[i]== nums[i-1])
            //    continue;
            vrr.push_back(nums[i]);
            solveusingbackt(target -nums[i], nums,vrr,ans,i+1);
            vrr.pop_back();
        }
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int>vrr;
        vector<vector<int>>ans;
        solveusingbackt(target, nums, vrr, ans,0);
        vector<int> num;
        int mini = INT_MAX;
        vector<int> tempo;
        int curr =0;
        for(auto i:ans)
        {
            
            curr = ans[0].size();
            if(mini>=curr)
            mini =curr;        
        }
        if(mini>=0)
        return mini;
        return 0;
    }
};

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int l = 0; // left pointer
        int r = 0; // right pointer
        int n = nums.size(); // size of the input array
        int sum = 0; // current sum of elements
        int len = INT_MAX; // minimum subarray length, initialized to maximum possible value

        while (r < n) { // iterate through the array
            sum += nums[r++]; // add the current element to the sum and move the right pointer

            while (sum >= s) { // check if the sum is greater than or equal to the target value
                len = min(len, r - l); // update the minimum subarray length if necessary

                sum -= nums[l++]; // subtract the leftmost element from the sum and move the left pointer
            }
        }

        return len == INT_MAX ? 0 : len; // return 0 if no subarray is found, otherwise return the minimum subarray length
    }
};
