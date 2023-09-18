class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
        // for(int i=0;i<n/2;i++)
        // {
        //     long long x = pow(2,i);
        //     if(x==n)return 1;
        // }
        // return 0;
        long long two=2;
        if(n==1){
            return true;
        }
        while(two<=n){
            if(two==n){
                return true;
            }
            two*=2;
        }
        return false;
    }
};
