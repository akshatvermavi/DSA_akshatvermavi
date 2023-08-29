class Solution {
public:
    int bestClosingTime(string customers) {
        int res =0;
        int cleft =0;
        for(int i=0;i<customers.size();i++)
        {
            if(customers[i]=='Y'){
                cleft++;
            if(cleft>0){
                res =  i+1;
                cleft = 0;
                }
            }
        else cleft--;
        }
        return res;
    }
};
