//Method 01 using sort function after sorting the array TC = O(N*MlogM) SC = O(N*M)
class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<string, vector<string>> mp;
       for(auto str: strs)
       {
           string s = str;
           sort(s.begin(),s.end());
           mp[s].push_back(str);
       } 
       vector<vector<string>>ans;
       for(auto it = mp.begin();it!=mp.end();it++)
       {
           ans.push_back(it->second);
       }
       return ans;
    }
};

//Method 02 without using sort function TC = O(N*k) SC = O(N*k)

class Solution {
public:
std::array<int,256>hash(string s)
{
    std::array<int,256>hash={0};
    for(int i=0;i<s.size();i++)
    hash[s[i]]++;
    return hash;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<std:: array<int, 256>, vector<string>> mp;
       for(auto str: strs)
       {
         mp[hash(str)].push_back(str);
       } 
       vector<vector<string>>ans;
       for(auto it = mp.begin();it!=mp.end();it++)
       {
           ans.push_back(it->second);
       }
       return ans;
    }
};
