// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
//         unordered_map<string,int>mp;
//         for(auto i:s)
//         {
//             mp[i]++;
//         }
//         for(auto i:mp)
//         {
            
//         }
//     }
// };

// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
//        int n = s.length();

// for (int len = 1; len <= n / 2; ++len) {
//     if (n % len == 0) { 
//         string substring = s.substr(0, len); 
//         string constructed;
        
        
//         for (int i = 0; i < n / len; ++i) {
//             constructed += substring;
//         }
        
//         if (constructed == s) {
//             return true; 
//         }
//     }
// }
//     return false;
//     }
// };


class Solution {
public:
     bool repeatedSubstringPattern(string str) {
        int i = 1, j = 0, n = str.size();
        vector<int> dp(n+1,0);
        while( i < str.size() ){
            if( str[i] == str[j] ) dp[++i]=++j;
            else if( j == 0 ) i++;
            else j = dp[j];
        }
        return dp[n]&&dp[n]%(n-dp[n])==0;
    }
};
