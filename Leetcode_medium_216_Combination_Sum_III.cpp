class Solution {
public:
     void solve(vector<vector<int>> &ans, vector<int> &ds, int sum,int ind,int k,int n)
    {
        if(ds.size() == k)
        {
            if(sum == n)
            {
                ans.push_back(ds);
            }
            return;               
        }
           for(int i =ind ;i<=9;i++)
           {
               if(i>n) 
               {
                   break;
               }
               sum = sum + i;
               ds.push_back(i);
               solve(ans,ds,sum,i+1,k,n);
               ds.pop_back();
               sum = sum - i;
           }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> v;
        int sum = 0;
        solve(ans,v,sum,1,k,n);
        return ans;   
    }
};
