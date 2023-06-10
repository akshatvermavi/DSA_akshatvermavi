class Solution {
public:
    int climbStairs(int n) {
      // int arr[n+1];
      // arr[0]=1;arr[1]=1;
      // for(int i=2;i<=n;i++)
      // {
      //     arr[i]=arr[i-1]+ arr[i-2]; 
      // }  
      // return arr[n];
      int prev1 =1, prev2 =1;
      int curr;
      
      for(int i=2;i<=n;i++)
      {
          int curr = prev1 +  prev2;
          prev2 = prev1;
          curr
      }  
      return arr[n];
  //This type give tle
      // if(n==0||n==1)
      // return 1;
      // int ways = climbStairs(n-1) + climbStairs(n-2);
      // return ways;
    }
};
