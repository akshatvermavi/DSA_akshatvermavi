// Method 01 code in python
class Solution:
    def isStrictlyPalindromic(self, n: int) -> bool:
        return False
// Method 02 give tle
class Solution {
public:
    bool binary(int n, int base)
    {
        long long a = pow(base,5);
        int bin[a];
        int i=0;
        while(n>0)
        {
            bin[i]= n%base;
            n=n/base;
            i++;
        }
       int x =0;
       int y =i -1;
       while(x<=y)
       {
           if(bin[x]!=bin[y])
           return "False";

           else
           {
               x++;
               y--;
           }
       }
       return "True";
    }
    bool isStrictlyPalindromic(int n) {
        int flag=0;
        for(int i=2;i<=n-2;i++)
        {
            int base = i;
           if(binary(base, n))
           {
               flag++;
           }
        }
        if(flag == n-3)
        return "true";

        return "false";
      
    }
};
