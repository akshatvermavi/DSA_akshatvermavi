class Solution {
public:
    int fib(int n) {
      int f[32] = {0};
      f[1]=1;
      for(int i=2;i<=n;i++)
      f[i]=f[i-1] + f[i-2];

      return f[n]; 

    // int a,b;
    // a=0,b=1;
    // int c = a+b;
    // a=b;
    // b=c;
    // return fib(c);
    }
};
