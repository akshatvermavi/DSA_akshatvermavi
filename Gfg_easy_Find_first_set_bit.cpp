class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
         if(n==0) return 0;
        if(n%2!=0) return 1;
        else{
            return 1+ getFirstSetBit(n/2);
        }
    }
};
