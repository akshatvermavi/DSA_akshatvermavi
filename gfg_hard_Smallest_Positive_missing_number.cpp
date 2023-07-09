class Solution
{
    //Function to find the smallest positive number missing from the array.
    static int missingNumber(int arr[], int size)
    {
        // Your code here
                int max = 0;
        
        for(int i=0; i<size; i++) {
            max = Math.max(max, arr[i]);
        }
        
        boolean[] flag = new boolean[max + 1];
        
        for(int i=0; i<size; i++) {
            if(arr[i] > 0) {
                flag[arr[i]] = true;
            }
        }
        
        for(int i=1; i<(max + 1); i++) {
            if(!flag[i]) return i;
        }
        
        return (max + 1);
    }
}
