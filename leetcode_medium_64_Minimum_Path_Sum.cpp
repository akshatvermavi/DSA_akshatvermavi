class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,1e9));
        typedef pair<int,pair<int,int>> pi;
        priority_queue<pi,vector<pi>,greater<pi>> pq;
		int pathSum0 = grid[0][0];
        pq.push({pathSum0,{0,0}});
        
        int delr[] = {1,0};
        int delc[] = {0,1};
        
        while(!pq.empty()){
            int val = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();
            
			// Destination Node
            if(row==n-1 and col==m-1) return val;
            
			// checking for adjacent possible node
            for(int i=0;i<2;i++){
                int newr = row+delr[i];
                int newc = col+delc[i];
                
				// Checking for valid nodes
                if(newr>=0 and newr<n and newc>=0 and newc<m){
					int pathSum=val+grid[newr][newc];
                    if(pathSum<vis[newr][newc]){
                        vis[newr][newc]=pathSum;
                        pq.push({pathSum,{newr,newc}});
                    }
                }
            }
        }
        
        return 0;
    }
};
