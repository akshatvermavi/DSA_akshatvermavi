class Solution {
public:
    bool canJump(vector<int>& nums) {
        // phir se kro chap diye ho
        if(nums.size()==1)
            return true;
        if(nums[0]==0)
            return false;
        int dist=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==0 && dist==i)
            {
                return false;
            }
            dist=max(dist,nums[i]+i);
            
        }
        return true;
    }
};
