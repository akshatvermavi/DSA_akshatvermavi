//python m01
class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        sys.set_int_max_str_digits(10000)
        return str(int(num1)+int(num2))
//c++ m02         
class Solution {
public:
    string addStrings(string num1, string num2) {
        int a = std::stoi(num1);
        int b = std::stoi(num2);
        return std::to_string(a+b);
    }

    string addre(string& num1,int p1, string& num2,int p2, int carry=0,)
    {
        //base case
        if(p1<0 && p2<0){
        if(carry!=0) 
        return string(1, carry +'0');
        else
        return "";
        }

        //ek case solve krange
        int n1 = (p1>=0 ? num1[p1] :'0') - '0';
        int n2 = (p2>=0 ? num2[p2] :'0') - '0';
        int csum = n1+n2 +  carry;
        int digit = csum%10;
        carry = csum/10;
        //string ans ="";
        ans.push_back(digit + '0');
        // rr call
        ans+= addre(num1, p1-1,num2, p2-1, carry );
       
        return ans;

    }
    string addStrings(string num1, string num2) {
    
       int carry =0;
       int n11=  num1.size();
       int n22 = num2.size();
       string ans = addre(num1,n11-1,num2,n22-1,carry);
       reverse(ans.begin(),ans.end());

       return ans;

    }

       void addre(string& num1,int p1, string& num2,int p2, int carry,string& ans)
    {
        //base case
        if(p1<0 && p2<0){
        if(carry!=0) 
        ans.push_back(carry +'0');

        return ;
        }

        //ek case solve krange
        int n1 = (p1>=0 ? num1[p1] :'0') - '0';
        int n2 = (p2>=0 ? num2[p2] :'0') - '0';
        int csum = n1+n2 +  carry;
        int digit = csum%10;
        carry = csum/10;
        //string ans ="";
        ans.push_back(digit + '0');
        // rr call
        addre(num1, p1-1,num2, p2-1, carry, ans );
        
        

    }
    string addStrings(string num1, string num2) {
        string ans = "";
       int carry =0;
       int n11=  num1.size();
       int n22 = num2.size();
       addre(num1,n11-1,num2,n22-1,carry, ans);
       reverse(ans.begin(),ans.end());

       return ans;

    }
};
