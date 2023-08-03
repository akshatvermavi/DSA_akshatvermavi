class Solution {
public:
    vector<string>ans;
    map<int,string>mp;
    void backtrack(string& digit,int start,string &temp){
        
        if(start==digit.size())ans.push_back(temp);

          for(auto x:mp[digit[start]-'0']){
              temp.push_back(x);
              backtrack(digit,start+1,temp);
              temp.pop_back();
          }
    }
    vector<string> letterCombinations(string digit) {
     
        if(digit=="") return ans;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        string temp;
        backtrack(digit,0,temp);
        return ans;
    }
};
