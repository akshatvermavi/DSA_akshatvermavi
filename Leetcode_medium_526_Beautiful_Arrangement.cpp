class Solution {
public:
  void solveusingbackt(vector<int> &vrr, int& n,int& ans, int currnum)
    {
        if(currnum==n+1)
        {
            ++ans;
            return;
        }
        for(int i=1;i<=n;i++){
            if(vrr[i]==0 && (currnum%i==0 || i%currnum==0))
            {
                vrr[i] = currnum;
                solveusingbackt(vrr, n, ans, currnum +1);
                vrr[i] = 0;
            }
        }
    }
    int countArrangement(int n) {
      vector<int> vrr(n+1, 0);
      int ans =0;
      solveusingbackt(vrr, n,ans, 1);
      return ans;  
    }
};
