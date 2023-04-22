// method 01 by me

class Solution {
private: 
    bool check(string &str, int i, int j){
        while(i<j){
            if(str[i] != str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }            
public:
    string longestPalindrome(string str) {
        int n = str.size();
        int starting_index = 0;
        int max_len = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(check(str, i, j)){
                    if(j-i+1 > max_len){
                        max_len = j-i+1;
                        starting_index = i;
                    }
                }
            }
        }
        return str.substr(starting_index, max_len);
    }
}; 

//Method 02 suing hash map  TC = o(n*n*n)

class Solution {         
public:

    bool ispalindrome(string&s,int start, int end)
    {
        while(start<end)
        {
            if(s[start]!=s[end])
            return false;
            
            start++;
            end--;
        }
        return true;
    }
    string longestPalindrome(string s) 
    {
        string ans ="";
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(ispalindrome(s,i,j)){
                    string t =s.substr(i, j-i+1);
                    ans = t.size() > ans.size() ? t: ans;

                }
            }
        }
        return ans;
    }
};

// method 03 whose TC = O(n*n) using dp to be continued....
