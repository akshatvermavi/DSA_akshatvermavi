// class Solution {
// public:
//     string largestOddNumber(string num) {
//         int maxi = 0;
//         vector<int>vrr;
//         for(int i=0;i<num.size();i++)
//         {
//             vrr[i] = num[i] - '0';

//         }
//         for(int i=0;i<vrr.size();i++)
//         {
//            if(maxi<vrr[i] + '0')
//            maxi = vrr[i] + '0';

//         }
//         return maxi;
//     }
// };
class Solution {
public:
string largestOddNumber(string num) { 
        int i;
        for( i = num.size()-1 ; i >= 0 ; --i){
            if((num[i]-48) % 2 != 0)
                break;
        }
        num.resize(i+1);
        
        return num; 
    }
};
