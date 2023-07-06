// class Solution {
// public:
//     bool solveusingbackt(vector<int>& vrr,vector<int>& quantity, int ithindex){
//         if(ithindex>=quantity.size())
//             return true;
//         for(int i=0;i<vrr.size();++i){
//             if(vrr[i]>=quantity[ithindex])
//             {
//                 vrr[i]-=quantity[ithindex];
//                 if(solveusingbackt(vrr, quantity, ithindex +1))
//                 return true;
//             }
//             vrr[i]+=quantity[ithindex];
//         }
//         return false;
//     }
//     bool canDistribute(vector<int>& nums, vector<int>& quantity) {
//        unordered_map<int,int> mp;
//        sort(quantity.begin(),quantity.end());
//        reverse(quantity.begin(),quantity.end());
//        for(auto i:nums){
//            mp[i]++;
//        } 
//        vector<int> vrr;
//        for(auto i:mp){
//            vrr.push_back(i.second);
//        }
//        return solveusingbackt(vrr,quantity,0 );
//     }
// };


class Solution {
public:
    bool solve(vector<int>& quantity,map<int,int>& cnt, int index ) {
        //base case
        if(index >= quantity.size()) {
            return true;
        }
        
        for(auto it = cnt.begin(); it != cnt.end(); it++) {
            if(it->second >= quantity[index]) {
                
                cnt[it->first] = cnt[it->first] - quantity[index];
                
                bool aageKaSol = solve(quantity, cnt, index+1);
                if(aageKaSol == true)
                    return true;
                //BT
                cnt[it->first] = cnt[it->first] + quantity[index];
            }
        }   
      return false;  
    }
    
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        map<int,int> cnt;
        //step1: create freq array
        for(int i=0; i<nums.size(); i++) {
            cnt[nums[i]]++;
        }
        //step2: sort quantity desc
        sort(quantity.begin(), quantity.end(), greater<int>());
        
        bool ans = solve(quantity, cnt, 0);
        return ans;
    }
};
