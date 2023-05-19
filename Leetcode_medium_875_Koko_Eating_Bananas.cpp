class Solution {
public:
  // phir se kro solve
    bool could_eat(vector<int>&piles,int h,int speed)
    {
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]%speed==0)
            {
                h-=(piles[i]/speed);//(piles[i]/speed) units of time to finish pile
            }
            else
            {
                h-=(piles[i]/speed)+1;//(piles[i]/speed) //units of time + 1 for remainder to finish pile
            }
            if(h<0)
            {
                return false;//time out....Guards return before could finish completing the current pile
            }
        }
        return true;//Guards didn't return wihtin time to catch
    }
    int minEatingSpeed(vector<int>&piles,int h) 
    {
        int left=1,right=INT_MIN;
        for(auto j:piles)//with this maximum limit we could always complete piles within time
        {
            right=max(right,j);
        }
        while(left<=right)//Normal Binary Search to find Minimum Element for which could_eat_piles within time
        {
            int mid=(left+right)/2;
            if(could_eat(piles,h,mid))
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return left;
    }
};
