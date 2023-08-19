class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        
        // Your code here
        // vector<int>vrr;
        // for(int i=0;i<n;i++)
        // {
        //     int sum=arr[i];
        //     if(sum==s)
        //         {
        //             vrr.push_back(i);
        //             break;
        //         }
        //     for(int j=i+1;j<n;j++)
        //     {
        //         sum+=arr[j];
        //         if(sum==s)
        //         {
        //             vrr.push_back(i);
        //             vrr.push_back(j);
        //             break;
        //         }
        //     }
            
        // }
        // return vrr;
        // if(s==0)
        //     return {-1};
        // for(int i=0;i<n;i++)
        // {
        //     long long sum=arr[i];
        //     if(sum==s)
        //         {
        //             return {i+1,i+1};
        //             break;
        //         }
        //     for(int j=i+1;j<n;j++)
        //     {
        //         sum+=arr[j];
        //         if(sum==s)
        //         {
        //             return {i+1,j+1};
        //             break;
        //         }
        //     }
            
        // }
        // return {-1};
        // int l =0; 
        // int r =0;
        // long long sum=0;
        // if(s==0)
        //     return{-1};
        // while(r<n)
        // {
        //     sum+=arr[r];
        //     while(sum>=s){
        //         if(sum==s)
        //         return {l+1, r+1};
        //     sum -=arr[l++];
        //     }
        //     r++;
        // }
        // return {-1};
        if(s==0)
            return {-1};
            
        int l=0;
        int r=0;
        long long sum=0;
        while(r<n)
        {
            sum+=arr[r];
            while(sum>=s)
            {
                if(sum==s)
                    return {l+1,r+1};
                sum -= arr[l++];
            }
            r++;
        }
        return {-1};
        }
};
