// class Solution {
// public:
//     int solveusingrr(string a, string b, int i, int j)
//     {
//         if(i==a.size())
//             return 0;
//         if(j==b.size())
//             return 0;
//         if(a[i]==b[j])
//             return 1+ solveusingrr(a,b,i+1,j+1);
//         else{
//             return  max(solveusingrr(a,b,i+1,j),solveusingrr(a,b,i,j+1));
//         }
        
        
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//       int i =0;
//       int j =0;
//       int n1 = text1.size();
//       int n2 = text2.size();
      
//       return solveusingrr(text1,text2,i,j);  
//     }
// };


// class Solution {
// public:
//     int solveusingmemo(string& a, string& b, int i, int j, vector<vector<int>>& dp)
//     {
//         if(i==a.size())
//             return 0;
//         if(j==b.size())
//             return 0;
//         if(dp[i][j]!=-1)
//             return dp[i][j];
//         int ans =0;
//         if(a[i]==b[j]){
//             ans =1+ solveusingmemo(a,b,i+1,j+1,dp);
//             }
//         else{
//             ans=  max(solveusingmemo(a,b,i+1,j,dp),solveusingmemo(a,b,i,j+1,dp));
           
//         }
//         dp[i][j]=ans;
//         return dp[i][j];
        
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//       int i =0;
//       int j =0;
//       int n1 = text1.size();
//       int n2 = text2.size();
//       vector<vector<int>>dp(n1, vector<int>(n2,-1));
//       return solveusingmemo(text1,text2,i,j,dp);  
//     }
// };



// class Solution {
// public:
//     int solveusingtab(string& a, string& b)
//     {
//           vector<vector<int>>dp(a.size()+1, vector<int>(b.size()+1,0));
        
       
//         for(int i =a.size()-1;i>=0;i--)
//         {
//             for(int j=b.size()-1;j>=0;j--)
//             {
//                  int ans =0;
               
//                 if(a[i]==b[j]){
//                     ans =1+ dp[i+1][j+1];
//                 }
//                 else{
//                    ans=  max(dp[i+1][j],dp[i][j+1]);
//                 }
//                 dp[i][j]=ans;
//             }
               
//         }
           
        
     
//         return dp[0][0];
        
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//       int i =0;
//       int j =0;
    
    
//       return solveusingtab(text1,text2);  
//     }
// };

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
    int longestCommonSubsequence(string text1, string text2) {
      int i =0;
      int j =0;
    
    
      return solveusingtab2(text1,text2);  
    }
};
