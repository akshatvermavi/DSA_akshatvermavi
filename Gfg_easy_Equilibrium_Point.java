class Solution {

    
    // a: input array
    // n: size of array
    // Function to find equilibrium point in the array.
    public static int equilibriumPoint(long arr[], int n) {

        // Your code here
        if(n==1) return 1;
        int i=0,j=n-1;
        long leftsum =0,rightsum=0;
        while(i<j)
        {
            if(leftsum<=rightsum) leftsum+=arr[i++];
            else rightsum+=arr[j--];
        }
        return leftsum==rightsum? i+1 :-1;
    }
}
