class Solution {
private: 
    void permuteUnique(vector<int>& nums, set<vector<int>>& set, vector<int> temp, int index){
        if(index == nums.size()){
            set.insert(temp);
            return;
        }
        for(int i=index; i<temp.size(); i++){
            swap(temp[index], temp[i]);
            permuteUnique(nums, set, temp, index+1);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        set<vector<int>> set;
        permuteUnique(nums, set, temp, 0);
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};
