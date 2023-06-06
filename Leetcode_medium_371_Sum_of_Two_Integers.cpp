// class Solution {
//     public:
//     int getSum(int c, int d) {
//         if(d==0 || c==0) return c | d;
//         return (int)(Math.log(Math.pow(2,c)*Math.pow(2,d))/Math.log(2));
//     }
// };

// class Solution {
//     public: 
//         int getSum(int a, int b) {
//         if(b==0 || a==0) return a | b;
//         return getSum(a^b, (a&b)<<1);
//     }
// };

class Solution {
public:
    int getSum(int a, int b) {
        unsigned int buff;
        do {
            buff = a & b;
            a ^= b;
            b = buff << 1;
        } while(buff);
        return a;
    }
};
