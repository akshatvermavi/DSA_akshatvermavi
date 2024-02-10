class Solution {
public:
    int psubstr(int j, int k, string& s)
    {
        int ans =0;
        while(j>-1 && k<s.size() && s[j] == s[k] )
        {
            ans++;
            k++;
            j--;
        }
        return ans;
    }
    int countSubstrings(string s) {
        int ans =0;
        for(int i=0;i<s.size();i++)
        {
            ans += psubstr(i,i,s) +  psubstr(i,i+1,s);
        }
        return ans;
    }
};
