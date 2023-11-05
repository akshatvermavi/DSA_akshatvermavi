class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
          unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue <pair<int,int>> p;
    for(auto i:mp) p.push({i.second,i.first});
    vector <int> ans;
    for(int i = 0;i < k;i++){
    ans.push_back(p.top().second);
    p.pop();
    }
    return ans;
    }
};
