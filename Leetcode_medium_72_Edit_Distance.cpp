// class Solution {
// public:
//  int solveusingrr(string word1,string word2, int i, int j)
//     {
//         if(i==word1.size())
//         {
//             return word2.size()-j;
//         }
//         if(j==word2.size())
//         {
//             return word1.size()-i;
//         }
//         int ans =0;
//         if(word1[i]==word2[j])
//         {
//            ans = solveusingrr(word1,word2,i+1,j+1);
//         }
//         else{
//            int insert= 1+ solveusingrr(word1,word2,i,j+1);
//            int deleted= 1+ solveusingrr(word1,word2,i+1,j);
//           int replace = 1 + solveusingrr(word1,word2,i+1,j+1);
//           ans = min(insert, min(deleted, replace));
//         }
//         return ans;
//     }
//     int minDistance(string word1, string word2) {
//         int n1 = word1.size();
//         int n2 = word2.size();
//         if(n1==0)
//             return n2;
//         if(n2==0)
//             return n1;
//         int i=0;
//         int j=0;
       
//         return solveusingrr(word1,word2,0,0);
//     }
// };


// class Solution {
// public:
// int solveusingmemo(string word1,string word2, int i, int j, vector<vector<int>>&dp)
//     {
//         if(i==word1.size())
//         {
//             return word2.size()-j;
//         }
//         if(j==word2.size())
//         {
//             return word1.size()-i;
//         }
//         int ans =0;
//         if(dp[i][j]!=-1)
//             return dp[i][j];
//         if(word1[i]==word2[j])
//         {
//            ans = solveusingmemo(word1,word2,i+1,j+1,dp);
//         }
//         else{
//            int insert= 1+ solveusingmemo(word1,word2,i,j+1,dp);
//            int deleted= 1+ solveusingmemo(word1,word2,i+1,j,dp);
//            int replace = 1 + solveusingmemo(word1,word2,i+1,j+1,dp);
//           ans = min(insert, min(deleted, replace));
//         }
//         dp[i][j] = ans;
//         return dp[i][j];
//     }
//     int minDistance(string word1, string word2) {
//         int n1 = word1.size();
//         int n2 = word2.size();
//         if(n1==0)
//             return n2;
//         if(n2==0)
//             return n1;
//         int i=0;
//         int j=0;
//         vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
//         return solveusingmemo(word1,word2,0,0,dp);
//     }
// };


// class Solution {
// public:
// int solveusingtab(string word1,string word2, int n1, int n2)
//     {
//         vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
//         //base case
//         for(int j=0;j<=n2;j++)
//         {
//             dp[n1][j] = n2 -j;
//         }
//         for(int i=0;i<=n1;i++)
//         {
//             dp[i][n2] = n1-i;
//         }
//        int ans =0;
//         for(int i=n1-1;i>=0;i--)
//         {
//             for(int j=n2-1;j>=0;j--)
//             {
                
//                  if(word1[i]==word2[j]){
//                      ans = dp[i+1][j+1];
//                     }
//                 else{
//                     int insert= 1+ dp[i][j+1];
//                     int deleted= 1+ dp[i+1][j];
//                     int replace = 1 + dp[i+1][j+1];
//                     ans = min(insert, min(deleted, replace));
//                     }
//                     dp[i][j] = ans;
//             }
//         }
       
//         return dp[0][0];
//     }
//     int minDistance(string word1, string word2) {
//         int n1 = word1.size();
//         int n2 = word2.size();
//         if(n1==0)
//             return n2;
//         if(n2==0)
//             return n1;
//         int i=0;
//         int j=0;
 
//         return solveusingtab(word1,word2,n1,n2);
//     }
// };


class Solution {
public:
int solveusingtab2(string word1,string word2, int n1, int n2)
    {
        
        vector<int>curr(n1+1,-1);
        vector<int>next(n1+1,-1);
        //base case
        for(int j=0;j<=n2;j++)
        {
            next[j] = n2 -j;
        }
       
       int ans =0;
        for(int i=n1-1;i>=0;i--)
        {
            for(int j=n2-1;j>=0;j--)
            {
                curr[n2] = n1-i;
                
                 if(word1[i]==word2[j]){
                     ans = next[j+1];
                    }
                else{
                    int insert= 1+ curr[j+1];
                    int deleted= 1+ next[j];
                    int replace = 1 + next[j+1];
                    ans = min(insert, min(deleted, replace));
                    }
                    curr[j] = ans;
            }
            next = curr;
        }
       
        return next[0];
    }
    int minDistance(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        if(n1==0)
            return n2;
        if(n2==0)
            return n1;
        int i=0;
        int j=0;
 
        return solveusingtab2(word1,word2,n1,n2);
    }
};
