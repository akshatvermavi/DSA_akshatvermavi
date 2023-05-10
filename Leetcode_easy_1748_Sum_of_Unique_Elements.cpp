// class Solution {
// public:
//     int sumOfUnique(vector<int>& nums) {
//          set<int> s;
//         int sum =0;
//     // Traverse the Vector
//     for (int x : nums) {
 
//         // Insert each element
//         // into the Set
//         s.insert(x);
//     }
//     for(auto i=s.begin();i!=s.end();i++)
//     {
//         sum+=*i;
//     }
//     return sum;
//     }
// };

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
          int ans=0;
    unordered_map<int,int> m;
    for(auto e:nums)
        m[e]++;
    for(auto e:m)
    {
        if(e.second==1)
            ans+=e.first;
    }
    return ans;
    }
};
