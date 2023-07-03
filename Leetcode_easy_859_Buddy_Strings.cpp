// class Solution {
// public:
//     bool buddyStrings(string s, string goal) {
//         int start = 0;
//         int end = s.size();
//         // while(start<end)
//         // {
//         //     swap(s[start], s[end]);
//         //     start++;
//         //     end--;
//         // }
//         // return (s == goal);
//         string str = s;
//         for(int i=0;i<end;i++)
//         {
//             for(int j=i+1;j<end;j++)
//             {
//                 swap(s[i],s[j]);
//                 if(s==goal)
//                 return true;
//                 else
//                 swap(s[i],s[j]);
//             }
//         }
//         return false;
//     }
// };

// class Solution {
// public:
// bool buddyStrings(string s, string goal) {
    
//     if (s.length() != goal.length() || s.empty()) {
//         return false;
//     }

//     if (s == goal) {
//         unordered_set<char> seen;
//         for (char c : s) {
//             if (seen.count(c) > 0) {
//                 return true;
//             }
//             seen.insert(c);
//         }
//         return false;
//     }

//     vector<int> diff;
//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] != goal[i]) {
//             diff.push_back(i);
//         }
//     }

//     return (diff.size() == 2 && s[diff[0]] == goal[diff[1]] && s[diff[1]] == goal[diff[0]]);
// }
// };

class Solution {
public:
bool buddyStrings(string s, string goal) {
    
    if (s.length() != goal.length()) {
        return false;
    }

    if (s == goal) {
        unordered_set<char> seen;
        for (char c : s) {
            if (seen.count(c) > 0) {
                return true;
            }
            seen.insert(c);
        }
        return false;
    }

    vector<int> diff;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != goal[i]) {
            diff.push_back(i);
        }
    }

    return (diff.size() == 2 && s[diff[0]] == goal[diff[1]] && s[diff[1]] == goal[diff[0]]);
}
};
