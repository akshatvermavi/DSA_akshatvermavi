// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//       int count =1, count1=0;
//       sort(nums.begin(),nums.end());
//       vector<int> arr;
//       for(int i=0;i<nums.size();i++)
//       {
//           if(nums[i+1]-nums[i]==1)
//           count++;
//           else{
//           arr.push_back(count);
//           count1++;
//           }
          
//       } 
//       sort(arr.begin(),arr.end());
//       int x = arr.size();
//       return arr[x-1];

//     }
// };

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> ans;
        int counter = 1;
        int maxi = INT_MIN;

        if(nums.size() == 0)
            return 0;
        else if(nums.size() == 1)
            return 1;
        
        sort(nums.begin(),nums.end());

        ans.push_back(nums[0]);

        for(int i = 1;i < nums.size();i++){
            if(ans.back() + 1 == nums[i]){
                ans.push_back(nums[i]);
                counter++;
            }else if(ans.back()+1 != nums[i] && ans.back() != nums[i]){
                ans.clear();
                ans.push_back(nums[i]);
                maxi = max(maxi,counter);
                counter = 1;
            }
            maxi = max(maxi, counter);
        }

        return maxi;
    }
};
