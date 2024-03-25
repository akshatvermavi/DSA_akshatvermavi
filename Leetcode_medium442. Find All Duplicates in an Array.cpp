class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // int n = arr.size();
        // vector<int>temp(n,0);
        // vector<int>ans;
        
        // for(int i=0; i<n; i++){
        //     temp[arr[i]] = temp[arr[i]] + 1;
        // }
        
        // for(int i=0; i<n; i++){
        //     if(temp[i]>1){
        //         ans.push_back(i);
        //     }
        // }
        
        // sort(ans.begin(), ans.end());
        
        // if(ans.size()>=1){
        //     return ans;
        // }else{
        //     ans.push_back(-1);
        //     return ans;}



    unordered_map<int, int> mp;
    int n = nums.size();

    // Count the occurrences of each element in the vector and store in the map
    for (int i = 0; i < n; i++) {
        mp[nums[i]]++;
    }

    std::vector<int> ans;

    // Find the duplicate elements and add them to the answer vector
    for (const auto& x : mp) {
        if (x.second == 2) {
            ans.push_back(x.first);
        }
    }

    return ans;
    }
};
