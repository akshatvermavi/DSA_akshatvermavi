class Solution
{
public:
    class DisjointSet
    {
        public:
        vector<int> parent,size;
        DisjointSet(int n)
        {
            parent.resize(n+1);
            for(int i=0;i<=n;i++) parent[i]=i;
            size.resize(n+1,1);
        }
        int findParent(int u)
        {
            if(parent[u]==u) return u;
            return parent[u]=findParent(parent[u]);
        }
        void Union(int u,int v)
        {
            u=findParent(u);
            v=findParent(v);
            if(size[u]<size[v])
            {
                parent[u]=v;
                size[v]+=size[u];
            }
            else 
            {
                parent[v]=u;
                size[u]+=size[v];
            }
        }
    };
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int gsize=n*n;
        DisjointSet ds(gsize);
        int maxsize=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0) continue;
                int curr=i*n+j;
                for(int k=0;k<4;k++)
                {
                    int ci=i+dx[k],cj=j+dy[k];
                    if(ci<0 || cj<0 || ci>=n || cj>=n || grid[ci][cj]==0) continue;
                    int adj=ci*n+cj;
                    if(ds.findParent(curr)!=ds.findParent(adj)) ds.Union(curr,adj);
                }
            }
        }  

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    int curr=i*n+j;
                    set<int> st;
                    for(int k=0;k<4;k++)
                    {
                        int ci=i+dx[k],cj=j+dy[k];
                        int adj=ci*n+cj;
                        if(ci<0 || cj<0 || ci>=n || cj>=n || grid[ci][cj]==0) continue;
                        st.insert(ds.findParent(adj));
                    }
                    int currsize=1;
                    for(auto it:st)
                    {
                        currsize+=ds.size[it];
                    }
                    maxsize=max(maxsize,currsize);
                }
                else
                {
                    int curr=i*n+j;
                    int uparent=ds.findParent(curr);
                    maxsize=max(maxsize,ds.size[uparent]);
                }
            }
        }
        return maxsize;
    }
};
