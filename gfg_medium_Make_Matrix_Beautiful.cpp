 class Solution
{
    public:
int findMinOpeartion(vector<vector<int> > a, int n)
    {   
        int ans=0,cnt=0;
        vector<int>row(n,0);
        vector<int>col(n,0);
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=a[i][j];
            }row[i]=sum,cnt=max(cnt,sum);
        }
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=a[j][i];
            }col[i]=sum,cnt=max(cnt,sum);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int add=min(cnt-row[i],cnt-col[j]);
                row[i]+=add;
                col[j]+=add;
                ans+=add;
            }
        }
        return ans;
    } 
};
