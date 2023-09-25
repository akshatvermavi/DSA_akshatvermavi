class Solution {
public:
    char findTheDifference(string s, string t) {
        // unordered_map<char,int>mp;
        // for(auto it:s)
        // {
        //     mp[it]++;
        // }
        // for(auto it:t)
        // {
        //     mp[it]++;
        // }
        // for(auto it:mp)
        // {
        //     int a = mp.first;

        // }

            sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     for(int i=0;i<t.size();i++)
     {
         if(t[i]!=s[i])
         return t[i];
     }
     return t[t.size()-1];
    }
};
