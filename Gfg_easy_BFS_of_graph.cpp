class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans, vis(V,0);
        queue<int> q;
        q.push(0);
        vis[0]++;
        while(!q.empty()){
            int d = q.front();
            q.pop();
            ans.push_back(d);
            for(int i:adj[d]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]++;
                }
            }
        }
        return ans;
    }
};
