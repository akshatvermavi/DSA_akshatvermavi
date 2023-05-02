class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //gives tle
    //     vector<int> vrr;
    //   for(int i=0;i<2*nums.size();i++)
    //   {
    //       if(i<nums.size())
    //       vrr.push_back(nums[i]);
    //       if(i>=nums.size())
    //       {
    //           i = i - nums.size();
    //           vrr.push_back(nums[i]);
    //       }
    //   }
    //   return vrr;

      vector<int> vrr;
      for(int i=0;i<nums.size();i++)
      {
          if(i<nums.size())
          vrr.push_back(nums[i]);
          
      }
      for(int i=0;i<nums.size();i++)
      {
             
              vrr.push_back(nums[i]);
          
      }
      return vrr;
    
    }
};
