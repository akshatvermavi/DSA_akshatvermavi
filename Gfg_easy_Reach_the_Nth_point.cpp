class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		     int n1=1,n2=2;
            int sum=0;
            if(n==1){
                return 1;
            }
            if(n==2){
                return 2;
            }
            else
            {
                for(int i=3;i<=n;i++){
                    sum=(n1+n2)%1000000007;
                    n1=n2;
                    n2=sum;
                }
            }
            return sum%1000000007;
		}
};
