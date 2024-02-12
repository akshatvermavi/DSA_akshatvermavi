// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//     sort(nums.begin(),nums.end());
//     int mid = nums.size()/2;
//     return nums[mid];
//     return -1;
      
//     }
// };


class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int>mp;
    for(auto i:nums)
        mp[i]++;
    for(auto i:mp)
    {
        if(i.second>n/2)
        return i.first;
    }
    return -1;
      
    }
};
