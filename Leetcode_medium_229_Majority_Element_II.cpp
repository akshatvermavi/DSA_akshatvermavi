class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int countmaj = nums.size()/3;
        unordered_map<int,int> mp;
        vector<int> vrr;
        for(auto numb : nums)
        {
            mp[numb]++;
        }
        for(auto numb : mp){
            if(numb.second > countmaj){
                vrr.push_back(numb.first);
            }
        }
    return vrr;
    }
};
