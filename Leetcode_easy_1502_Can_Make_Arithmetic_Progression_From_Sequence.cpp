class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
     sort(arr.begin(),arr.end());
     for(int i=0;i<arr.size() -1;i++)
     {
         if(arr[i+1]-arr[i] != arr[1] - arr[0])
         return false;
     }   
     return true;
    }
};
