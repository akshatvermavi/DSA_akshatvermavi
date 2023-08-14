class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        // vector<int> vrr;
        // sort(nums.begin(),nums.end());
        // int ans;
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     ans=nums[i]^nums[i+1];
        //     if(ans!=0)
        //         vrr.push_back(ans);
        // }
        // return vrr;
        //sort(nums.begin(),nums.end());
        map<int, int>mp;
        vector<int>vrr;
        for(auto i:nums)
            mp[i]++;
        for(auto j:mp)
        {
            if(j.second==1) vrr.push_back(j.first);
        }
        return vrr;
    }
};
