// class Solution {
// public:
//     bool f(int num, int count)
//     {
//         int flag =0;
//          string str_num = to_string(num);  // Convert the number to a string
     
//     for (int i = 0; i < str_num.length(); i++) {
//         for (int j = i+1; j < str_num.length(); j++) {
//             if (str_num[i] == str_num[j]) {
//                 count--;
//                 flag =1;
//                 break;  // Exit the inner loop once a repeating digit is found
//             }
//         }
//     }
//     if(flag ==1)
//     return 1;
//     else 
//     return 0;
//     }
//     int countDigits(int num) {
//     int count =0;
//     while(num !=0)
//     {
//         if(num %(num % 10) ==0 )
//         {
//             if(f(num ,count))
//             count = count + 0;
//             else
//             count++;
//             num = num/10;
//         }
//     } 
//       return count;
//     }
  
// };


class Solution {
public:
    int countDigits(int num) {
        int an = 0, n = num,l;
        while(n){
            l = n%10;//GET LAST DIGIT OF NUMBER
            n /= 10;//DIVIDE NUMBER BY 10
            if(num%l==0)an++;//IF NUM DIVISIBLE BY DIGIT OF NUM INCREMENT ANS BY 1
        }
        return an;
    }
};
