class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        // int count =0;
        // for(int i=0;i<n-1;i++)
        // {
        //     for(int j=0;j<n-1;j++)
        //     {
        //         if(numerator[i]/denominator[j] + numerator[i+1]/denominator[j+1] == 1)
        //         count++;
        //     }
        // }
        // return count;
          unordered_map<double, int> m;
        int ans = 0;
        
        for(int i=0; i<n; i++) {
            ans += m[((double)(denominator[i] - numerator[i]) / (double)denominator[i])];
            m[(double)numerator[i] / (double)denominator[i]]++;
        }
        return ans;
        
    }
};
