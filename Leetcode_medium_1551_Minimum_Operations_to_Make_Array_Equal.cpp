class Solution {
public:
    int minOperations(int num) {
      //Standard question
      return num%2 == 0 ?  num/2*num/2 : num/2*(num/2+1);
    }
};
