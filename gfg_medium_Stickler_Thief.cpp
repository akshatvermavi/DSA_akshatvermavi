class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        // int sum1=0,sum2=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(i%2==0)sum1+=arr[i];
        //     if(i%2==1)sum2+=arr[i];
        // }
        // return max(sum1,sum2);
        
        int b = arr[0];
        if(n==1)return b;
        int c = max(arr[0],arr[1]);
        for(int i=2;i<n;i++)
        {
            int a = max(arr[i] + b, c);
            b=c;
            c=a;
        }
        return c;
    }
};
