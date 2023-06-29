class Solution{
public:
    int nextHappy(int N){
        N++;
        while(isHappy(N)!=true){
            N++;
        }
        return N;
    }

    int isHappy(int number){
        set<int> st;
        while(1){
            number = sumOfSquareDigits(number);
            if(number==1){
                return true;
            }
            if(st.find(number) != st.end()){
                return false;
            }
            st.insert(number);
        }
    }

    int sumOfSquareDigits(int number) {
        int sum = 0;

        while (number > 0) {
            int digit = number % 10;
            sum += digit * digit;
            number /= 10;
        }

        return sum;
    }
};
