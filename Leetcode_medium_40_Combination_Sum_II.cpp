class Solution {
public:

vector<int> vec;
vector <vector<int>> ans;
void func(int n, vector<int>& v,int i)
{
    if(n<0) return ;
    if(n==0)
    {
      ans.push_back(vec);
        return ; 
    } 
   for (int j = i; j < v.size(); j++) {
    if (n - v[j] < 0) break;  // check if index j is within bounds of v
    vec.push_back(v[j]);
    func(n - v[j], v, j + 1);
    vec.pop_back();
    while (j + 1 < v.size() && v[j] == v[j + 1]) j++; // skip duplicates
}

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
     
     sort(candidates.begin(),candidates.end());
func(target,candidates,0);

       
       
        return ans;
    }
};
