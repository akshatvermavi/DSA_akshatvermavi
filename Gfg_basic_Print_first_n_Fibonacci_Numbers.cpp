class Solution
{
    private:
    void feb(vector<long long>&vrr , int n)
    {
        vrr[0]=1;
        vrr[1]=1;
        for(int i=2;i<n;i++)
        {
            vrr[i] = vrr[i-1] + vrr[i-2];
        }
    }
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> vrr(n,-1);
        feb(vrr,n);
        return vrr;
        
    }
};
