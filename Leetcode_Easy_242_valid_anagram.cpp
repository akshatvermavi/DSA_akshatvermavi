//Method 01 via sorting the string

class Solution {
public:
    bool isAnagram(string s, string t) {
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      for(int i=0;i<s.size();i++)
      {
          if(s[i]!=t[i])
          return false;
      }  
      if(s.size()!=t.size())
      return false;
    
      return true;
    }
};

// method 02 via frequency table of freqTable[256] = {0};

class Solution {
public:
    bool isAnagram(string s, string t) {
      int freqTable[256] = {0};
      for(int i=0;i<s.size();i++)
      {
        freqTable[s[i]]++;
      }
      for(int i=0;i<t.size();i++)
      {
        freqTable[t[i]]--;
      }
      for(int i=0;i<256;i++)
      {
        if(freqTable[i]!=0)
        return false;
      }
      return true;
    }
};
