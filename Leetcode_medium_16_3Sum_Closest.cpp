// class Solution {
// public:
//     bool ls(vector<int>& nums , int target, int n)
//     {
//         for(int j=0,j<n;j++)
//         {
//             if(nums[j]==target)
//             return j;
//         }
//         return 0;
//     }
//     int threeSumClosest(vector<int>& nums, int target) {
//     int n = nums.size();
//        if(n==1 && target==nums[0])
//        return nums[0];
//        int sum =0;
//        if(n==2 &&( target==nums[0]|| target ==nums[1]))
//        return nums[1]+nums[0];
//        if(n>2 && ls(nums,target,n))
//        {
//            int x = ls(nums,target,n);
//            sum= nums[x]+nums[x-1]+nums[x-2];
//            return sum;
//        }
//        return 0;
      
//     }
// };


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int calcu = INT_MAX;
        int ans = 0;
        int n = nums.size() ;
        sort( nums.begin() , nums.end() );
        for( int i=0 ; i<n-2 ; i++ )
        {
            int l = i+1 ;
            int r = n-1 ;
            while( l<r )
            {
                int sum = nums[i]+nums[l]+nums[r];
                int temp = abs( sum - target );
                if( temp<calcu )
                {
                    calcu = temp ;
                    ans = sum;
                }
                if( sum==target )
                {
                    return sum;
                }
                else if( sum<target )
                {
                    l++;
                }
                else
                {
                    r--;
                }
            } 
        }
        return ans;
    }
};
