class Solution{
public:
	// #define ll long long
	long long int mod=1e9+7;

 ll countStrings(int n) {

     // code here

     int a = 1, b = 1;

    for (int i = 1; i <n; i++) {

       long long int temp =(a + b)%mod ;

        b = a;

        a = temp;

    }

    return (a+b)%mod;
	}
};
