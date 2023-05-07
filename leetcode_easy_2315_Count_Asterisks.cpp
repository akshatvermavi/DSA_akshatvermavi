// class Solution {
// public:
//     int countAsterisks(string s) {
//         int count =0;
//         for(int i=0;i<s.size();i+=2)
//         {
//             if(i>=0){
//             if((s[i]== '*' && s[i+1]=='*') && (i+1<s.size()))
//             {
//                 count+=2;
//             }
//             }
//             if(i>=1){
//             if(s[i-1]== '*' && s[i]=='*')
//             {
//                 count++;
//             }
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
    int countAsterisks(string s) {
        int count =0;
        int bracket =0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='|')
            bracket++;
            if(bracket%2==0 && s[i] == '*')
            count++;
        }
        return count;

    }
};
