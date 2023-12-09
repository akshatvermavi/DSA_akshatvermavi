
class Solution {
  public:
        vector<int> sieve;
    void primefactors(int n)
    {
        for(int i = 2; i*i <= n; i++)
        {
            for(int j = 2*i; j <= n; j+=i)
            {
                sieve[j] = 0;
            }
        }
    }
    int sumofdigits(int n){
        int sum = 0;
        while(n > 0){
            sum += (n%10);
            n /= 10;
        }
        return sum;
    }
    int smithNum(int n) {
        int sumdigit = sumofdigits(n);
        sieve.resize(n+1,1);
        primefactors(n);
        int sum = 0;
        // number should be composite
        if(sieve[n] == 1)
        {
            return 0;
        }
        for(int i = 2; i <= n; i++)
        {
            while(sieve[i] && n%i == 0)
            {
                sum += sumofdigits(i);
                n = n/i;
            }
        }
        
        return sum == sumdigit;
    }
};
