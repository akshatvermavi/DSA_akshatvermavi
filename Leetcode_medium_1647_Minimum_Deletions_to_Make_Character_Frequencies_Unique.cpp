// class Solution {
// public:
//     int minDeletions(string s) {
//       unordered_map<int,char>mp;
//       for(auto it:s)
//       {
//           mp[it]++;
//       }  
//       int count =0;
//       vector<int>vrr;
//       for(auto it:mp)
//       {
//           vrr.push_back(it.second);
//       }
//       sort(vrr.begin(),vrr.end());
//       for(int i=0;i<vrr.size()-1;i++)
//       {
//           if(vrr[i]==vrr[i+1])
//           {
//             //   count+=2;
//             //   i+=2;
//             vrr[i]--;

//           }
//           else{
//               i++;
//           }
//       }
           
//            for(int i=0;i<vrr.size()-1;){
//           if(vrr[i]==vrr[i+1])
//           {
//               count+=2;
//               i+=2;
            

//           }
//           else{
//               i++;
//           }
//       }
      
//       return count;
//     }
// };


class Solution {
public:
    int minDeletions(string s) {
    //   unordered_map<int,char>mp;
    //   int del =0;
    //   unordered_set<int>freq;
    //     for(auto it:s)
    //     {
    //         mp[it]++;
    //     }
    //     for(auto& it:mp)
    //     {
    //         int fq = it.second;
    //         while(fq >0 && freq.find(fq) != freq.end())
    //         {
    //             fq--;
    //             del++;
    //         }
    //         freq.insert(fq);
    //     }
    //     return del;


         std::unordered_map<char, int> cnt;
        int deletions = 0;
        std::unordered_set<int> used_frequencies;
        
        for (char c : s) {
            cnt[c]++;
        }
        
        for (auto& kv : cnt) {
            int freq = kv.second;
            while (freq > 0 && used_frequencies.find(freq) != used_frequencies.end()) {
                freq--;
                deletions++;
            }
            used_frequencies.insert(freq);
        }
        
        return deletions;
    }
};
