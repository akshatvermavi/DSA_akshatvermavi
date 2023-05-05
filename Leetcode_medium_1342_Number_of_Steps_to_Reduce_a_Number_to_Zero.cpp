class Solution {
public:
    int numberOfSteps(int n) {
        // TC = O(N) SC =  O (1)
       int count =0;
       while(n!=0)
       {
           if(n%2==0)
           {
               n = n/2;
               count++;

           }
           else
           {
               n = n-1;
               count++;
           }
       } 
       return count;
    }
};
