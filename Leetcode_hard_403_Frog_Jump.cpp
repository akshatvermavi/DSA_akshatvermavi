// class Solution {
// public:

//     int f(int ind, vector<int> &stones,vector<int> &dp )
//     {
//         if(ind == 0) return 0;
//         if(dp[ind] != -1) return dp[ind];
//         int left = f(ind -1, stones, dp) + abs(stones[ind] - stones[ind-1]);
//         int right = INT_MAX;
//         if(ind >1)
//         right = f(ind-2,stones, dp) + abs(stones[ind] - stones[ind -1]);
//         return dp[ind] = min(left,right);
//     }
//     bool canCross(vector<int>& stones) {
//         int n = stones.size();
//         vector<int> dp(n+1, -1);

//         return f(n-1, stones, dp);

//     }
// };

// class Solution {
// public:
//     int fn(vector<int>& stones, int n)
//     {
//         if(n==0) return 0;
//         int left;
//         //if(n-1>=0)
//         left = fn(stones,n-1) + abs(stones[n] - stones[n-1]);
//         int right = INT_MAX;
//         if(n-2>=0)
//         right = fn(stones,n-2) + abs(stones[n] - stones[n-2]);
//         return min(left, right);
//         return false;
//     }
//          bool canCross(vector<int>& stones) {
//              int n = stones.size();
//            if(stones[1]!=1)
//            return false;  
//            if(stones[0]!=0)
//            return false;
//          return fn(stones,n-1 );
//     }
// };

// give memory limit exceeds
// class Solution {
// public:
//     bool canCross(vector<int>& stones) {
//         if(stones[1]-stones[0]>1)
//             return false;
        
//         if(stones.size()==2)
//             return (stones[1]-stones[0]==1);
        
//         vector<vector<int>> dp(stones.size(), vector<int> (stones[stones.size()-1]-stones[0], -1));
//         return func(0, 1, stones, dp);
//     }



//     bool func(int i, int jumps, vector<int> &stones, vector<vector<int>> &dp){
//         if(i==stones.size()-1)
//             return true;
            
//         if(dp[i][jumps] != -1)
//             return dp[i][jumps];
        
//         bool ans=false;
//         for(int ind=i+1; ind<stones.size(); ind++){
//             if(stones[ind]-stones[i]>jumps+1)
//                 break;
//             for(int t=-1; t<2; t++){
//                 if(stones[ind]-stones[i]==jumps+t)
//                     ans = func(ind, jumps+t, stones, dp) || ans;
//             }
//         }
    
//         return dp[i][jumps] = ans;
//     }
// };

class Solution {
public:
    bool canCross(vector<int>& stones) {
        int N = stones.size();
        vector<vector<bool>> dp(N, vector<bool> (N+1, false));
        dp[0][1] = true;
        
        for(int i = 1; i < N; ++i){
            for(int j = 0; j < i; ++j){
                int diff = stones[i] - stones[j];
                if(diff > N || !dp[j][diff]) 
                    continue;
                
                if(i == N - 1) 
                    return true;
                
                dp[i][diff] = true;
                if(diff - 1 >= 0) dp[i][diff - 1] = true;
                if(diff + 1 <= N) dp[i][diff + 1] = true;
            }
        }

        return false;
    }
};
