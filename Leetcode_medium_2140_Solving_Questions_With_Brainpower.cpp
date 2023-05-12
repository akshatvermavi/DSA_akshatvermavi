// class Solution {
// public:
//     long long mostPoints(vector<vector<int>>& ques) {
//      int x = ques.size();
//      int y = ques[0].size();
//      int sum1=0,sum2=0,sum3=0;
//      for(int i=0;i<x;i+=3)
//      {
//         sum1+=ques[i][0];
//      }
//       for(int i=1;i<x;i+=3)
//      {

//         sum2+=ques[i][0];
//      }
//       for(int i=2;i<x;i+=3)
//      {

//         sum3+=ques[i][0];
//      }
//      if(sum1>=sum2 && sum1>=sum3)
//      return sum1;
//      else if(sum2>=sum1 && sum2>=sum3)
//      return sum2;
//      else if(sum3>=sum1 && sum3>=sum2)
//      return sum3;
//      return 0;
//     }
// };

class Solution {
public:
    long long c(int i,vector<vector<int>>& ques,vector<long long>& dp)
    {
        
        //base case
        if(i>=ques.size()) return 0;
        long long ans =0;
        if(dp[i]!=-1) return dp[i];
        ans = max(ques[i][0]+c(i+ques[i][1] +1, ques,dp), c(i+1,ques,dp));
        dp[i] = ans;
        return ans;

    }
    long long mostPoints(vector<vector<int>>& ques) {
        int n = ques.size();
        vector<long long> dp(n,-1);
        return c(0,ques,dp);
    }
};

 
