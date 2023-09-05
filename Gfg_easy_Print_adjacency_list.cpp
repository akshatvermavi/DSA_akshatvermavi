class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>>ans(V);
        for(auto it:edges)
        {
            int a = it.first;
            int b = it.second;
            ans[a].push_back(b);
            ans[b].push_back(a);
        }
        return ans;
    }
};
