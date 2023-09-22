class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
         long long s=0,e=n-1;
        long long lm=0,rm=0;
        long long sum=0;
        while(s<e)
        {
            if(arr[s]<=arr[e])
            {
                if(arr[s]>=lm)lm=arr[s];
                else sum+=lm-arr[s];
                s++;
            }
            else
            {
                if(arr[e]>=rm)rm=arr[e];
                else sum+=rm-arr[e];
                e--;
            }
        }
        return sum;
    }
};
