// class Solution {
// public:
//     bool f(char& ch)
//     {
//         if(ch == 'A' ||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'||ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
//         return 1;
    
//     return 0;
//     }
//     int maxVowels(string s, int k) {
//         int count =0;
//         vector<int> vrr;
//         //int j =0;
//         for(int i=0;i<s.size();i++)
//         {
//             char chr = s[i];
//             if(s[i] && f(chr)){
//             count++;
            
//             }
//             else{ 
//             vrr.push_back(count);
//             count =0;

//             }
//         }
//         int maxi = 0;
//         for(int i=0;i<vrr.size();i++)
//         {
//             if(maxi<=vrr[i])
//             maxi = vrr[i];
//         }
//         return maxi;
//     }
// };

class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int max_count = 0;
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i >= k && vowels.count(s[i-k])) {
                count--;
            }
            if (vowels.count(s[i])) {
                count++;
            }
            max_count = max(max_count, count);
        }
        return max_count;
    }
};
