class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es =0;
        int ds = 0;
          for(int i=0;i<nums.size();i++)
        {
            es +=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            int x = nums[i];
            if(x>9){
            while(x!=0)
            {
                int rem = x%10;
                ds += rem;
                x = x/10;

            }
            }
            else
            ds+=nums[i];
        }
            
        
        int y = abs(es - ds);
        return y;
    }
};
