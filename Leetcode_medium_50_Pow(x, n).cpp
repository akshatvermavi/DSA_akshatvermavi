// class Solution {
// public:
//     double myPow(double x, int n) {
//       // double a = pow(x,n);
//       // return a;  
//       double y = 1.0;
//       int a = n;
//       for(int i=0;i<n;i++)
//       {
//         y = y*x;
//       }
//       return y;
//     }
// };

class Solution {
public:
double myPow(double x, int n) {
  double ans = 1.0;
  long long nn = n;
  if (nn < 0) nn = -1 * nn;
  while (nn) {
    if (nn % 2) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  if (n < 0) ans = (double)(1.0) / (double)(ans);
  return ans;
}
};
