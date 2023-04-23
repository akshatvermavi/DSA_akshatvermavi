//Method 01 TC = O(N^2) forming zigzag vector 
class Solution {
public:
    string convert(string s, int numrows) {
        if(numrows==1) return s;

        vector<string> zigzag(numrows);
        int i=0, row=0;
        bool direction =1;
        while(true)
        {
            if(direction)
            {
                while(row<numrows && i<s.size())
                {
                    zigzag[row++].push_back(s[i++]);
                }
                row = numrows -2;
            }
            else{
                while(row>=0 && i<s.size())
                zigzag[row--].push_back(s[i++]);
                 row = 1;
            }
                 if(i>= s.size()) break;
                 direction = !direction;
        }
        string ans = "";
        for(int i=0;i<zigzag.size();i++)
        {
            ans+=zigzag[i];
            cout<<zigzag[i]<<endl;
        }
        return ans;
  
    }
};
