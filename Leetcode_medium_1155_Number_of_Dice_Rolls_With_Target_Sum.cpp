class Solution {
public:
long long MOD = 1000000007;
int solveusingtab(long long n, long long k, long long target)
{
   vector<int> prev(target +1, 0);
   vector<int> curr(target +1, 0);
        prev[0] = 1;
        
        for(int index =1;index<=n;index++)
        {     
            for(int t =1;t<=target;t++)
            {
                long long int ans =0; 
                for(int i=1;i<=k;i++){
            long long int recans =0;
            if(t -i>=0)
            recans = prev[t-i];
            recans = recans%MOD;
            ans = ans %MOD;
            ans = (ans%MOD + recans%MOD)%MOD;
                }
                 curr[t]= ans;
            }
             prev = curr;
        }
        
       
       return prev[target];

}
    int numRollsToTarget(int N, int K, int T) {
        
        return solveusingtab(N, K,T);
        
    }
};
