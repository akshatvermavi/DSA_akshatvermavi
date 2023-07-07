class Solution {
public:
    int maxConsecutiveAnswers(std::string answerKey, int k) {
        int countF = 0;
        int countT = 0;
        int i = 0;
        int j = 0;
        int ans = 0;
        
        while (j < answerKey.length()) {
            if (answerKey[j] == 'F')
                countF++;
            else
                countT++;
            
            while (std::min(countF, countT) > k) {
                if (answerKey[i] == 'F')
                    countF--;
                else
                    countT--;
                
                i++;
            }
            
            ans = std::max(ans, countF + countT);
            j++;
        }
        
        return ans;
    }
};
