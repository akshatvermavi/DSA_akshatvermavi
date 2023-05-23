class Solution {
public:
  //fir se kro logic nhi aya smj
    int countTriplets(vector<int>& arr) {
     arr.insert(arr.begin(),0);
     int n = arr.size(), result =0;
     for(int i=1;i<n;i++)
     {
         arr[i] ^= arr[i-1];
     }  
     unordered_map<int, int>count, mp;
     for(int i=0;i<n;i++)
     {
         result  += count[arr[i]]++ * (i-1) -mp[arr[i]];
         mp[arr[i]] +=i;
     } 
     return result;
    }
};
