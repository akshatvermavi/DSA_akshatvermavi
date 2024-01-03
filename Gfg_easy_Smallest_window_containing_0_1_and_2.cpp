class Solution {
  private:
    int findMinLength(int i,int minLength,int zero,int one, int two) {
        return min(minLength, (i - min(min(zero,one),two) + 1) );
    }
    
  public:
    int smallestSubstring(string S) {
        // Code here
        int zero = -1;
        int one = -1;
        int two = -1;
        int minLength = INT_MAX;
        
        for(int i = 0; i < S.size(); i++) {
            if(S[i] == '0')
                zero = i;
            else if(S[i] == '1')
                one = i;
            else
                two = i;
            
            if(zero != -1 && one != -1 && two != -1)
                minLength = findMinLength(i, minLength, zero, one, two);
        }
        
        return (minLength != INT_MAX) ? minLength : -1;
            
    }
};
