class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s =0;
        int end = arr.size()-1;
        int mid;
        while(s<end)
        {
            mid = s + (end-s)/2;
            if(arr[mid]>arr[mid+1])
            end = mid;
            else
            s = mid+1;

        }
        return s;
        //return 0;
    }
};
