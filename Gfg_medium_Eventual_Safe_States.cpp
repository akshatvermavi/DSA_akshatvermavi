
class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
          vector<int>adjRev[V];
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++){
        for(auto it:adj[i])
        {
            adjRev[it].push_back(i);
            indegree[i]++;
        }
        }
        queue<int>q;
        for(int i=0;i<V;i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        vector<int>ans;
        while(!q.empty())
        {
            int temp = q.front();
            q.pop();
            ans.push_back(temp);
            for(auto it:adjRev[temp])
            {
                indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
            }
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
