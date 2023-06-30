//User function template for C++
// class Solution{
// public:	
//     int binaryToDecimal(int n)
//     {
//     int num = n;
//     int dec_value = 0;
 
//     // Initializing base value to 1, i.e 2^0
//     int base = 1;
 
//     int temp = num;
//     while (temp) {
//         int last_digit = temp % 10;
//         temp = temp / 10;
 
//         dec_value += last_digit * base;
 
//         base = base * 2;
//     }
 
//     return dec_value;
// }
		
// 	int isDivisible(string s){
// 	    //complete the function here
// 	    int x = stoi(s); 
// 	   int z= binaryToDecimal(x);
	    
// 	    if(z%3==0)
// 	        return 1;
// 	    else
// 	        return 0; 
// 	}

// };

class Solution{
public:	
	int isDivisible(string s){
	    //complete the function here
	    int odd=0,even=0;
	    for(int i=s.length()-1;i>=0;i--)
	    {
	        if(s[i]=='1')
	        {
	            if(i%2==0)
	            {
	                even++;
	            }
	            else
	            {
	                odd++;
	            }
	        }
	    }
	    if((odd-even)%3==0)
	    {
	        return 1;
	    }
	    return 0;
	}
};
