class Solution {
public:
    // optmisation improve kro runtime 6% ke around tha bass so..
    int findMin(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     return nums[0];   
    }
};
