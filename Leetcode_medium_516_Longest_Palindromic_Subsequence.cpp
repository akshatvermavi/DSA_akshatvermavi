class Solution {
public:
    int solveusingtab2(string& a, string& b)
    {
          vector<int>curr(b.size()+1,0);
 
          vector<int>next(b.size()+1,0);       
       
        for(int i =a.size()-1;i>=0;i--)
        {
            for(int j=b.size()-1;j>=0;j--)
            {
                 int ans =0;
               
                if(a[i]==b[j]){
                    ans =1+ next[j+1];
                }
                else{
                   ans=  max(curr[j+1],next[j]);
                }
                curr[j] = ans;
             
            }
            next = curr;
               
        }
         return next[0];
        
    }
    int solveusingmemo(string& a, string& b, int i, int j, vector<vector<int>>& dp)
    {
        if(i==a.size())
            return 0;
        if(j==b.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans =0;
        if(a[i]==b[j]){
            ans =1+ solveusingmemo(a,b,i+1,j+1,dp);
            }
        else{
            ans=  max(solveusingmemo(a,b,i+1,j,dp),solveusingmemo(a,b,i,j+1,dp));
           
        }
        dp[i][j]=ans;
        return dp[i][j];
        
    }
    int longestPalindromeSubseq(string s) {
          int i =0;
      int j =0;
     
    
        string first = s;
        reverse(s.begin(), s.end());
        string second = s;
         int n1 = first.size();
         int n2 = second.size();
        vector<vector<int>>dp(n1, vector<int>(n2,-1));
        return solveusingmemo(second, first,i,j,dp);
        //return solveusingtab2(second, first);
    }
};
