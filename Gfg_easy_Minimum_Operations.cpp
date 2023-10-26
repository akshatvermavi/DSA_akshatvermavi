class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int count =0;
        while(n>0)
        {
            if(n%2==0)
            {n=n/2;
            count++;
            }
            if(n%2==1)
            {
                n =n-1;
                count++;
            }
        
        }
        return count;
    }
};
