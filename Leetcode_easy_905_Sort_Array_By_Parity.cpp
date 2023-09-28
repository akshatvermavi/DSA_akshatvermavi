class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      vector<int>vrr;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]%2==0)
          {
              vrr.push_back(nums[i]);
          }
      }  
       for(int i=0;i<nums.size();i++)
      {
          if(nums[i]%2==1)
          {
              vrr.push_back(nums[i]);
          }
      } 
      return vrr;
    }
};
