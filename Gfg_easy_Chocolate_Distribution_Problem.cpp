class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long mini = LLONG_MAX;
    for(int i=0;i<n-m+1;i++)
    {
           
            long long x = a[m +i -1] - a[i];
            mini = min(mini, x);
            
    }
    return mini;
    
    }   
};
