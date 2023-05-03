//method 01 gives compilation error
// class Solution {
// public:
//     int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//         int g =0;
//         int p =0;
//         int m =0;
//         int sum =0;
//         int k =0;
//         for(int i=0;i<garbage.size();i++)
//         {
//             string str = garbage[i];
//             for(int j=0;j<str.size();j++)
//             {
//                 if(str[i]=='G')
//                 {
//                     g++;
//                     if(i>=1 && k< travel.size())
//                     g +=travel[k++];
//                 }
//                 else if(str[i]=='P')
//                 {
//                     p++;
//                     if(i>=1 && k< travel.size())
//                     p+=travel[k++];
//                 }
//                 else if(str[i]=='M')
//                 {
//                     m++;
//                     if(i>=1 && k< travel.size())
//                     m+=travel[k++];
//                 }
//             }
//         }
//         sum = p+g+m;
//         return sum;
//     }
// };

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int cnt=0,last_p=0,last_g=0,last_m=0;
        for(int i=0;i<garbage.size();i++){
            for(auto c:garbage[i]){
  // count the all character beacuse it must be take 1 minutes to collect it;
                 cnt++;
// find the last index of 'p' ;
// so we move only upto that last character;
                if(c=='P') last_p=i;
// find the last index of 'g' ;
// so we move only upto that last character;
                 else if(c=='G') last_g=i;
// find the last index of 'm' ;
// so we move only upto that last character;
                 else last_m=i;
            }
        }
        for(int i=1;i<travel.size();i++){
// prefixsum of all element of travel (array);
           travel[i]+=travel[i-1];
        }
        int ans=cnt;
    // sum of minute to travel from one house(zero indexing house ) 
// to last indexing of particular types of garbage; 
        if(last_p>0) ans+=travel[last_p-1];
        if(last_g>0) ans+=travel[last_g-1];
        if(last_m>0) ans+=travel[last_m-1];
        return ans;
    }
};
