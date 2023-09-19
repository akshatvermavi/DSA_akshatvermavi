class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     if(nums[i]==nums[i+1])return nums[i];
        // }
        // return -1;

         map<int,int>mp;
        for(int i=0;i<nums.size();i++)
      {

        mp[nums[i]]++;
        if(mp[nums[i]]==2)
        return nums[i];
      }
      return 1;
    }
};
