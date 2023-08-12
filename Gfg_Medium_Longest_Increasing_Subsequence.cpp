class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
          vector<int> dp{a[0]};
        
        for (int i = 0; i < n; i++){
            if(a[i] > dp.back()) dp.push_back(a[i]);
            else {
                auto it = lower_bound(dp.begin(), dp.end(), a[i]);
                *it= a[i];
            }
        }
        return dp.size();
    }
};\
