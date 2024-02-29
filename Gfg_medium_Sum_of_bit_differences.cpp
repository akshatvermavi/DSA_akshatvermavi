class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	     long long ans=0;

        //traversing 32 bits each at once
        for(int i=0;i<32;i++){

           //count variable for counting the number of mismatch
            long long int count=0;
            for(int j=0;j<n;j++){
                if((arr[j]>>i)&1==1){
                    count++;
                }
            }
           // for each mismatch we pair having 1 and 0 
            if(count!=0 and count!=n)
            ans+=((count)*(n-count));
        }

        //multiple by 2 bcz we have to take (x, y) and (y, x) seperately
        return 2*ans;
	}
};
