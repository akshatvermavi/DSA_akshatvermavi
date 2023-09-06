class Solution 
{
    public:
    void dfs(int u, vector<int>adj[],vector<bool>&visited){
        visited[u] = true;
        for(auto it:adj[u]){
            if(!visited[it]){
                dfs(it,adj,visited);
            }
        }
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	      vector<bool>visited(V,false);
        int v = -1;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,visited);
                v = i;
            }
        }
        fill(visited.begin(),visited.end(),false);
        dfs(v,adj,visited);
        for(auto it:visited){
            if(!it)
                return -1;
        }
        return v; 
	}

};
