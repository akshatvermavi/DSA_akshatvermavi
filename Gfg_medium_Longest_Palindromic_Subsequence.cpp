class Solution{
  public:
    int longestPalinSubseq(string str) {
        //code here
          
        string str1="";
        int n=str.length();
        for(int i=n-1; i>=0; i--)
        {
            str1+=str[i];
        }
        int dp[n+1][n+1];
        for(int i=0; i<n+1; i++)
        {
            for(int j=0; j<n+1; j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<n+1; j++)
            {
                if(str[i-1]==str1[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
};
