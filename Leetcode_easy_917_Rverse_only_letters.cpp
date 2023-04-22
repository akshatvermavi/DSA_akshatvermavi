// Method 01 TC = O(n) SC = O(1)
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0;
        int h = s.size() -1;

        while(l<h)
        {
            if(isalpha(s[l]) && isalpha(s[h]))
            {
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(!isalpha(s[l]))
            l++;
            else
            h--;
        }
        return s;
    }
};

// Method 02 under work
class Solution {
public:
    string reverseOnlyLetters(string s) {
  string str;
        int n = str.size();
        for        (int i=0;i<s.size();i++)
        {
            str[i] = s[n -1 -i];
        }
        return str;
    }
};
