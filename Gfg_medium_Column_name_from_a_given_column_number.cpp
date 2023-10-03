class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
         string ans;
        while (n > 0) {
            int r = (n - 1) % 26;
            ans = static_cast<char>('A' + r) + ans;
            n = (n - 1) / 26;
        }
        return ans;
    }
};
