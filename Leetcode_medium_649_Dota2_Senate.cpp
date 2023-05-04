class Solution {
public:
    string predictPartyVictory(string senate) {
        // int r =0 ,d =0;
        // for(int i=0;i<senate.size();i++)
        // {
        //     if(senate[i] == 'D')
        //     {
        //         d++;
        //         r--;
        //     }
        //     else if(senate[i] == 'R')
        //     {
        //         r++;
        //         d--;
        //     }
        // }
        
        // if(r>d)
        // {
        //     string str1 = "Radient"; 
        //     return str1;
        // }
        // else if(d>r)
        // {
        //     string str2 = "Dire"; 
        //     return str2;
        // }
        // else
        // return 0;

         int score = 0; // +ve for R and -ve for D
        for (int i = 0; i < senate.size(); ++i) {
            const char ch = senate[i];
            if (ch == 'R') {
                if (score < 0) 
                    senate.push_back('D');
                
                ++score;
            } else {
                if (score > 0) 
                    senate.push_back('R');
                
                --score;
            }
        }
        return score > 0 ? "Radiant" : "Dire";
    }
};
