class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>>ar;
    sort(nums.begin(),nums.end());
    ar.push_back(nums);
    
    while(next_permutation(nums.begin(),nums.end()))
    {
        ar.push_back(nums);
    } 
    return ar;
        
    }
};
