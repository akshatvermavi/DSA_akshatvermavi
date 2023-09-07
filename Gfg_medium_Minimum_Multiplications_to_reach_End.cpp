class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        // int n = arr.size();
        // int x = start* arr[0];
        // int y = x % 100000;
        // for(int i=1;i<n;i++)
        // {
        //     if(y==end) return i;
        //     y = (y * arr[i] ) % 100000;
        // }
        // return -1;
        
        
        
        queue<int>q;
        q.push(start);
        int mod = 100000;
        vector<int>vis(mod, 0);
        vis[start] = 1;
        
        
        int ans = 0;
        while(!q.empty()){
            int sz = q.size();
            for(int i=0; i<sz; i++){
                int node = q.front();
                q.pop();
                if(node == end) return ans;
                
                for(auto id: arr) {
                    start = id * node;
                    start %= mod;
                    if(vis[start] == 0){
                        vis[start] = 1;
                        q.push(start);
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};
