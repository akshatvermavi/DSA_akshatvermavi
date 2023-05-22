class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    // vector<int> arr;
    // int n = nums.size();
    // int l = nums[0];
    // int r = nums[n-1];
    // int first;
    // while(r>=l)
    // {
    //     int mid = l + (r-l)/2;
    //     if(target==nums[mid])
    //     {
    //         arr.push_back(mid);
    //         first = mid;
    //     }
    //     else if(target>nums[mid])
    //     {
    //         l = mid +1;
    //         mid = l+ (r-l)/2;
    //        // arr.push_back(mid);
    //     }
    //     else if(target<nums[mid])
    //     {
    //         r = mid -1;
    //         mid = l + (r-l)/2;
    //        // arr.push_back(mid);
    //     }
    //     else 
    //     arr.push_back(-1);

    // }   
    //  while(r>=l)
    // {
    //     int mid = l + (r-l)/2;
    //     if(target==nums[mid] && mid!=first)
    //     {
    //         arr.push_back(mid);
    //         first = mid;
    //     }
    //     else if(target>nums[mid])
    //     {
    //         l = mid +1;
    //         mid = l+ (r-l)/2;
    //        // arr.push_back(mid);
    //     }
    //     else if(target<nums[mid])
    //     {
    //         r = mid -1;
    //         mid = l + (r-l)/2;
    //        // arr.push_back(mid);
    //     }
    //     else
    //     arr.push_back(-1);

    // } 
    // int m = arr.size();
    // return arr[];
    // //return arr[m-1];

    // int id = -1, count =0;
    // for(int i=0;i<nums.size();++i){
    //     if(target>=nums[i]){
    //         if(nums[i]==target)
    //         {
    //         id = i;
    //         count++;
    //         }
    //     }
    //     else
    //     break;
    // }
    // if(count==0)
    // return {-1,-1};
    // else
    // return {id - count+ 1,id};
    vector<int> vrr;
    int count =0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==target){
        vrr.push_back(i);
        count++;
        }

    }
    if(count ==0)
    return {-1,-1};
    return {vrr[0], vrr[vrr.size()-1]};
    }
};
