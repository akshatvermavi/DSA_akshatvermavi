class Solution {
public:
    int search(vector<int>& nums, int target) {
    //     int s = nums.size();
    //    int l = nums[0];
    //    int r = nums[s-1];
    //    int mid = l + (r-l)/2;
    //    if(r>=l){
    //    if(nums[mid]==target)
    //    return mid;
    //    else if(nums[mid]>target){
    //    r = mid -1; 
    //    mid = l + (r-l)/2;
    //    }
    //    else if(nums[mid]<target){
    //    l = mid + 1;
    //    mid = l + (r-l)/2;
    //    }
       
    //    }
    //    return -1;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==target)
        return i;
    }
    return -1;
    }
};
