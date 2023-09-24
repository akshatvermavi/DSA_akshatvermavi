class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        // vector<int>vrr;
        // //sort(arr,arr+n);
        // unordered_map<int,int>mp;
        // for(int i=0;i<n;i++)
        // {
        //     mp[arr[i]]++;
        // }
        // for(auto it:mp)
        // {
        //     int x = it.first;
        //     int y = it.second;
        //     if(y>1)vrr.push_back(x);
        // }
        // if(vrr.size()==0) return {-1};
        // return vrr;
        
        int temp[n] = {0} ;
        vector<int>ans;
        
        for(int i=0; i<n; i++){
            temp[arr[i]] = temp[arr[i]] + 1;
        }
        
        for(int i=0; i<n; i++){
            if(temp[i]>1){
                ans.push_back(i);
            }
        }
        
        sort(ans.begin(), ans.end());
        
        if(ans.size()>=1){
            return ans;
        }else{
            ans.push_back(-1);
            return ans;}
    }
};
