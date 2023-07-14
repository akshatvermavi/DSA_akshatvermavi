// class Solution {
// public:
//     int helper(int index, int prev, vector<int>& arr, int diff){
//         int n = arr.size();
//         if(index >= n){
//             return 0;
//         }

//         int take = 0;
//         int notake = 0;
//         if(prev == -10000){
//             notake = helper(index + 1, prev, arr, diff);
//             take = 1 + helper(index + 1, arr[index], arr, diff);
//         }
//         else{
//             notake = helper(index + 1, prev, arr, diff);
//             if(arr[index] - prev == diff){
//                 take = 1 + helper(index + 1, arr[index], arr, diff);
//             }
//         }
//         return max(take, notake);
//     }
//     int longestSubsequence(vector<int>& arr, int difference) {
//         int n = arr.size();
//         return helper(0, -10000, arr, difference);
//     }
// };

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int n = arr.size();
        unordered_map<int, int> dp; // Stores the maximum length at each index
        
        int ans = 1; // Initialize with the minimum length of 1
        
        for (int i = 0; i < n; i++) {
            int num = arr[i];
            if (dp.find(num - difference) != dp.end()) {
                dp[num] = dp[num - difference] + 1;
            } else {
                dp[num] = 1;
            }
            
            ans = max(ans, dp[num]);
        }
        
        return ans;
    }
};
