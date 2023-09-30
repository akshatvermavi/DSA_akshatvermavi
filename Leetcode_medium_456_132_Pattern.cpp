class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         for(int k=j+1;k<n;k++)
        //         {
        //             if(i < j && j< k)
        //             {
        //                 if(nums[i]<nums[k] && nums[k]<nums[j])return true;
        //             }
        //         }
        //     }
        // }
        // return false;

        // for(int i=0;i<n;i++)
        // {
        //     if(i+2<n){
        //     if(nums[i+1]> nums[i] && nums[i+1]>nums[i+2] && nums[i+2]>nums[i])return 1;
        // }
        // }
        // return 0;


        stack<int>s;
        int third =INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<third)return 1;
            while(!s.empty() && s.top()<nums[i])
            {
                third = s.top();
                s.pop();
            }
            s.push(nums[i]);
        }

        return 0;

        // int s = 0;
        // int e = n-1;
        //  int m = (s+e)/2;
        // while(s<m && m<e)
        // {
           
        //     if(nums[s]<nums[m] && nums[m]<nums[e])
        //     return true;
        //     else if(nums[s]<nums[m] && nums[m]>nums[e])
        //     {
        //         e--;
        //     }
        //     else if(nums[s]<nums[m] && nums[m]>nums[e])
        //     {
        //         s++;
        //     }
        //     m = (s+e)/2;
        // }
        // return false;
    }
};
