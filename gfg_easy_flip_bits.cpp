class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
           int ct=0, flip=0;
        for(int i=0;i<n;i++)
        {
            a[i]==1?ct--:ct++;
             if(ct<=0)
                ct=0;
             else{
                 flip = max(ct,flip);
             }
        }
        flip = max(ct,flip);
      
        int ans=flip;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)ans++;
        }
        return ans;
    }
};
