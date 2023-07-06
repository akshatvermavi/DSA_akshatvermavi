class Solution {
public:
    void combocheckro(vector<int>& candidates, int target, vector<int>& vrr, vector<vector<int>>& ans, int index)
    {
        if(target ==  0){
            ans.push_back(vrr);
            return;
        }
        if(target<0)
            return;
        for(int i=index;i<candidates.size();i+1)
        {
            vrr.push_back(candidates[i]);
            combocheckro(candidates, target- candidates[i], vrr, ans, i++);
            vrr.pop_back();
        }
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> vrr;
        vector<vector<int>>ans;
        combocheckro(candidates, target, vrr, ans, 0);
        return ans;
    }
};
