// class Solution {
// public:
//     int rob(vector<int>& nums) {
//        int odd=0,even=0;
//        for(int i=0;i<nums.size();i++)
//        {
//            if(i%2==0)
//            even+=nums[i];
//            else
//            odd+=nums[i];
//        } 
//        if(even>=odd)
//        return even;
//        else
//        return odd;
//     }
// };

class Solution {
public:
int maxim(vector<int>&nums)
{
    int n =nums.size();
    int prev = nums[0];
    int prev2 = 0;
    for(int i=1;i<n;i++)
    {
        int take = nums[i];
        if(i>1)
        take += prev2;
        int not_take = 0+ prev;
        int curi = max(take, not_take);
        prev2 =prev;
        prev = curi;

    }
    return prev;
}
  long long int rob(vector<int>& nums) 
{ 
    vector<int> temp1,temp2;
    int n= nums.size();
    if(n==1) return nums[0];
    for(int i=0;i<n;i++)
    {
        if(i!=0) temp1.push_back(nums[i]);
        if(i!=n-1) temp2.push_back(nums[i]);
    }

  return max(maxim(temp1), maxim(temp2));
}
};
