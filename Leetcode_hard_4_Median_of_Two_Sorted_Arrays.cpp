class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        double median;
        for(auto num:nums1 )
        {
            arr.push_back(num);
        }
        for(auto num:nums2)
        {
            arr.push_back(num);
        }
        sort(arr.begin(),arr.end());
        int n =arr.size();
        if(n%2==0)
        {
            median = (arr[n/2 -1] + arr[n/2])/2.0;
            return median;
        }
        else
        {
            return arr[n/2];
        }
        //  int n = arr.size();  // O(n)
        
        // return n%2?arr[n/2]:(arr[n/2-1]+arr[n/2])/2.0;
       // return arr(arr.size()-1);
    }
};
