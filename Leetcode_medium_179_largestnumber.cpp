// method 01 gives TLE
class Solution {
public:
    string largestNumber(vector<int>& nums) {
    string str;
    sort(nums.begin(),nums.end());
    int n= nums.size();
    int i=0;
    while(n!=0)
    {
        str[i] = nums[i];
    }
    sort(str.begin(),str.end());
    return str;
    }
};

//Method 02 via sorting lexicographycally

class Solution {
public:
static bool mycomp(string a, string b)
{
    string t = a+b;
    string f = b+a;
    return t>f;
}
    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        for(auto n:nums)
        {
            snums.push_back(to_string(n));
        }
        sort(snums.begin(),snums.end(), mycomp);
        if(snums[0]=="0") return "0";
        string ans = "";
        for(auto str: snums)
        {
            ans += str;
        }
        return ans;
    }
};
