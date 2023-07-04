class Solution {
public:
    int singleNumber(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n = nums.size();
      if(n==1)
      return nums[0];
      else{
      if(nums[0]!=nums[1])
      return nums[0];
      else if(nums[n-1]!=nums[n-2])
      return nums[n-1];
      else 
      for(int i=2;i<=n-4;i++)
      {
          if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1])
          return nums[i];
      } 
      } 
      return 0;
    }
};
