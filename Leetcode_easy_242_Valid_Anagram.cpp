class Solution {
public:
    bool isAnagram(string s, string t) {
     if(s.size()!=t.size())return 0;
     int resultd[128]= {0};
     for(int i=0;i<s.size();i++)
     {
         resultd[s[i]] +=1;
         resultd[t[i]] -=1;
     }   
     for(int i=0;i<128;i++)
     {
         if(resultd[i]>0)return 0;
     }
     return 1;
    }
};
