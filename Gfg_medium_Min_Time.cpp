class Solution {
  public:
    long long dp[100002][2];
   long long fun(vector<vector<int>>&v,int i,int fl){
       int prev=0;
       if(i>0)
       prev=v[i-1][fl];
       if(dp[i][fl]!=-1) return dp[i][fl];
       if(i==v.size()) return dp[i][fl]=abs(prev);
       int f=v[i][0],s=v[i][1];
      
       long long op2=LLONG_MAX;
       long long op1=abs(prev-s)+abs(f-s)+fun(v,i+1,0);
       if(f!=s)
       op2=abs(prev-f)+abs(f-s)+fun(v,i+1,1);
       return dp[i][fl]=min(op1,op2);
       
   }
    long long minTime(int n, vector<int> &l, vector<int> &t) {
        int mx=*max_element(t.begin(),t.end());
        
        vector<pair<int,int>>v(mx+1,{INT_MAX,INT_MIN});
        
        for(int i=0;i<n;i++) {
        v[t[i]].first=min(v[t[i]].first,l[i]);
        v[t[i]].second=max(v[t[i]].second,l[i]);
        }
        vector<vector<int>>arr;
        for(int i=0;i<=mx;i++){
            if(v[i].first!=INT_MAX) 
            arr.push_back({v[i].first,v[i].second});
        }
        memset(dp,-1,sizeof(dp));
        return fun(arr,0,0);
    }
};
